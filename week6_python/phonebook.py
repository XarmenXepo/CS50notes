# iterating through a list, to find the input that user requested
names = ["Carter", "David", "John"]

name = input("Name to search: ")

for n in names:
    if name == n:
        print("Found")
        break
else:
    print("Not Found")
# in Python, for loops can have an else clause
# in this case, Python will run through lines 6-8
# when at the end of the loop, if line 9 'break' was never called, Python will go to line 10
