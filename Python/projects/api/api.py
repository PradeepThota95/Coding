from flask import flask
api = flask.Flask(__name__)
api.config["DEBUG"] = True;

@api.route('/', methods=['GET'])
def home():
    return "<h1>Distant Reading Archive</h1><p>This site is a prototype API for distant reading of science fiction novels.</p>"

app.run()

