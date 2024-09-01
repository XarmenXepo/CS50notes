# iterating through a list, to find the input that user requested
names = ["Carter", "David", "John"]

name = input("Name to search: ")

if name in names:
    print("Found")
else:
    print("Not Found")
# we do not need to iterate through the list pedantically, unlike in C
# python is able to use linear search, to look through a list for the requested value
