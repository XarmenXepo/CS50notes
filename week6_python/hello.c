# greets the user using command line arguements
# sys is a library that contains system-type functionality
from sys import argv

if len(argv) == 2:
    print(f"Hello, {argv[1]}")
else:
    print("Hello World")

# run greet.py with a name supplied input on the CLI to have it return the greeting with user's name
# as length of argv is set to 2, only a user input with one arguement will be considerd in the 'if' statement
# should user enter ie first and last name, greet.py will just default to the 'else' statement
