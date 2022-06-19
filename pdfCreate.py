from pathlib import Path
import datetime
import argparse
import re
import tempfile
import pdfkit
from bases.utils import render_html


def main():
    parser = argparse.ArgumentParser(
        prog="Source2PDF",
        usage="%(prog)s [options] path",
        allow_abbrev=False,
        description="Convert source codes listed in given directory to PDF file",
        epilog="Happy Coding <3"
    )
    parser.add_argument("path", metavar="PATH", type=str,
                        help="path to source codes")
    parser.add_argument("-i", "--gitignore", action="store_true",
                        help="Don't include file listed in gitignore in PDF file")
    parser.add_argument("-o", "--output", type=str, action="store",
                        help="Name for an output file", default="output.pdf")
    parser.add_argument("-t", "--title", metavar="PDF TITLE", action="store", type=str,
                        help="PDF Title eg: C Programming Assignments", default="Assignments")
    parser.add_argument("-d", "--date", metavar="DATE", action="store",
                        help="Date To Mentioned", type=str, default=str(datetime.date.today()))
    args = parser.parse_args()
    path = Path(args.path).resolve()
    if args.gitignore:
        gitignore = list(
            path.glob("**/.gitignore")
        ) or list(
            (path.parent.glob("**/.gitignore"))
        )
        if gitignore:
            gitignore = gitignore[-1]
        with open(gitignore, "r") as f:
            ignoredFiles = [
                ignoredfile.split("/")[-1] for ignoredfile in f.read().split()
            ]
    else:
        ignoredFiles = []
    source_codes = []
    for file in path.iterdir():
        if not (file.name in ignoredFiles):
            with open(file, "r") as source_code_fo:
                source_code = source_code_fo.read()
                comment = re.search(
                    r"/\*([\w\d\s=,;\^/\(\)\+\-\.:!\*'\"]+)\*/",
                    source_code).group(1)
                source_codes.append(
                    {
                        "header": comment.strip().split("\n")[0],
                        "code": source_code,
                    }
                )
    html = render_html(
        title=args.title,
        source_codes=source_codes,
        date=args.date
    )
    with tempfile.NamedTemporaryFile(delete=True) as tmp:
        with open(tmp.name, "w+") as f:
            f.write(html)
            f.seek(0)
            pdfkit.from_file(f, args.output)


if __name__ == "__main__":
    main()
