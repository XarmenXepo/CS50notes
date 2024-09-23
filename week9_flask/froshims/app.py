# flask is a popular micro framework thrid party library popular withs Python, amongst others like Django
# for creating dynamic applications
from flask import Flask, render_template, request



# tells app.py to treat this as an application
# __name__ is a special variable in Python
# it will refer to the current file name regardless of what name it was/is/will be given/changed into
app = Flask(__name__)

SPORTS = ["Basketball", "Soccer", "Ultimate Frisbee"]

# specifies that whenever user visits app.route, index() will get called and it's content thereof will be returned
@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS)


# this route is for registering users, where they must select one of three options in the category 'sport'
@app.route("/register", methods=["POST"])
def register(
    if not request.form.get("name") or request.form.get("sport") not in SPORTS: # this ensures that users cannot enter their own arbitrary sport category but must adhere to the given lists
        # users being able to enter arbitrary inputs can pollute a backend database or even result in attacks such as SQL injection
        return render_template ("failure.html")
    return render_template ("success.html")
)