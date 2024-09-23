# in Python's sys library, there is a function called 'exit'
#
import sys

if len(sys.argv) != 2:
    print("Missing command-line arguement \nPlease run this program with a single input for greeting, ie. name") #prompting a user to enter some input
    sys.exit(1)

print(f"hello, {sys.argv[1]}")
sys.exit(0) # Python has the same capabilities as in C, to either exit with an error (1) or with no error (0)
