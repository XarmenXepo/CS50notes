# printing out a block of n x n
from cs50 import get_int

while True:
    n = get_int("Height: ")
    if n > 0:
        break

for i in range(n):
    for j in range(n):
        print("#", end="") # using end="" eliminates Python adding a new line for each iteration, thereby printing in a line instead of a stack
    print() # using this at the end, moves the prompt to a new line
