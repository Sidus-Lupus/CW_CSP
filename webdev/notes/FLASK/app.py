#CW app

from flask import Flask, redirect, url_for, render_template

app = Flask(__name__)
admin = True

@app.route("/")
def home():
    return render_template("index.html", heading="Home Page", content="")

@app.route("/test")
def testing():
    return render_template("index.html", heading="Test Page", content="This is not a dwill! :3")

@app.route("/admin")
def adminstrator():
    if admin:
        return "Hello admin Lupus <h3>X3</h3>"
    else:
        return redirect(url_for("home"))

@app.route("/<name>")
def hello(name):
    return f"Hello {name} :3"
@app.route("/wolf")
def wolf():
    return render_template("firstwebpage.html")



app.run()