# defining our own function 'meow' in Python
# and defining the 'meow' function at the beginning of the code, as good code design

def main(): # we define a new functino called 'main' up here, that contains our 'meow' function
    for i in range(3):
        meow()

def meow():
    print("meow")

main() # we must call the 'main' function at the end, so that 'meow' can be called. Recall this is automatic in C, but not in Python.
