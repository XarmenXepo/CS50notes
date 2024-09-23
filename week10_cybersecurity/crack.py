# a simple .py script to bruteforce a 4-digit password
from string import digits
from itertools import product # itertools is a library of tools that have an iterative capability

for passcode in product(digits, repeat=4): # this will produce 10,000 iterations of combinations
    print(passcode) # prints out to screen, for demonstration purposes to see how quickly 4-digit passwords can be cracked
