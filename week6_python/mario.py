# obtianing a user input and interating to print an output in a stack as well as in a single line

from cs50 import get_int

while True:
    n = get_int("Height: ")
    if n > 0:
        break
# it is common in Python to induce an infinite loop, to ensure user is prompted until a valid input is recieved
# in this example, the get_int ensures only a number is accepted, and n > 0 ensures only positive integers are accepted

for i in range(n):
    print("#")

for i in range (n):
    print("?", end="") # using end="" eliminates Python adding a new line for each iteration, thereby printing in a line instead of a stack

print() # using this at the end, moves the prompt to a new line



# another simple variation of printing in a row
print( "$" * 4)
#this can also simply print a row of dollar signs
