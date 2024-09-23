# flask is a popular micro framework thrid party library popular withs Python, amongst others like Django
# for creating dynamic applications
from flask import Flask, render_template, request



# tells app.py to treat this as an application
# __name__ is a special variable in Python
# it will refer to the current file name regardless of what name it was/is/will be given/changed into
app = Flask(__name__)



# specifies that whenever user visits app.route, index() will get called and 'hello world' will be returned
@app.route("/")
def index():
    name = request.args["name"]
    return render_template("index.html", placeholder=name)
    # placeholder is called from index.html and is equated to the variable name
