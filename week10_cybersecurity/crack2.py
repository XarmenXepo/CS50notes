# a simple .py script to bruteforce a 4-alphabet password
from string import ascii_letters
from itertools import product # itertools is a library of tools that have an iterative capability

for passcode in product(ascii_letters, repeat=4): # this will produce roughly 7 million iterations of combinations
    print(passcode)
    # prints out to screen, for demonstration purposes
    # to see how much slower cracking 4-char passwords can be relative to 4-digit passwords
