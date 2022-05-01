# SourceCodes to PDF
### Installation

To install for use in terminal, run:

```sh
git clone https://github.com/shubRaj/sourcecodeToPDF.git
```

To install dependencies, run:

```sh
python3 -m pip install pipenv
cd ./sourcecodeToPDF
pipenv sync
pipenv shell
```
Finally, run:
```sh
python3 pdfCreate.py examples/29-04-2022 --output example.pdf --date 2022-04-30 --title example
```

