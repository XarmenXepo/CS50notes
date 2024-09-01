import csv # csv is a Python module that opens & reads csv files

file = open("favorites.csv", "r")
# do something with file

# using the 'with' operator is the Pythonic way of opening files
# this will also ensure file gets closed automatically after this block of code is exited
with open("favorites.csv", "r") as file:
    # do something with file
    reader = csv.reader(file) # reader is an object in the csv module that can read files
    next(reader) # skipping the top line as they are usually metadata type
    for row in reader:
        favorite = row[1]
        print(row[1])
        # prints out the row, one row after another, and the data in position 1 of each row
        # which are the title of the movies
        # as each row has 3 columns, this effectively prints out the middle column



# as data files can be edited in the GUI by users, simply reading  data from a row's specific column may not be constant
# using DictReader is the preferred method
