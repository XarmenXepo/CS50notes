#forcing an entire string to uppercase using .before

before = input("Before: ")
print("After:", end="") # using end="" tells python not to put each char on a new line. Python automatically adds a new line, recall that C requires \n
print(before.upper())

# parameters are positional, what matters are the order in which we specify them
