# a simple .py script to bruteforce an 8-character passcode
from string import ascii_letters, digits, punctuations
from itertools import product # itertools is a library of tools that have an iterative capability

for passcode in product(ascii_letters + digits + punctuations, repeat=8): # this will produce roughly 7 quadrillion iterations of combinations
    print(passcode)
    # prints out to screen, for demonstration purposes
    # we can see how much slower cracking 8-char passcodes can be, relative to 4-alphabet passwords