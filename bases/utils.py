import jinja2
import pathlib
def render_html(**kwargs):
    template_loader = jinja2.FileSystemLoader(searchpath=pathlib.Path(__file__).resolve().parent)
    template_env = jinja2.Environment(loader=template_loader)
    template_file = "_format.html"
    template = template_env.get_template(template_file)
    output_text = template.render(
        **kwargs
    )
    return output_text
