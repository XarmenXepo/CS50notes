# using DictReader instead of reader
import csv # csv is a Python module that opens & reads csv files

file = open("favorites.csv", "r")
# do something with file

# using the 'with' operator is the Pythonic way of opening files
# this will also ensure file gets closed automatically after this block of code is exited
with open("favorites.csv", "r") as file:
    # using DictReader instead of reader
    reader = csv.DictReader(file)
    #next(reader) # we do not skip to next, as DictReader will read this first line in order to know the column names
    # thereby creating a row of Dictionary with key:value pairs, instead of a List
    # the keys are the header names, the values are the items in each row

    for row in reader:
        print(row["genres"])
        # prints out the row, one row after another, and the data in position 1 of each row
        # as each row has 3 columns, this effectively prints out the middle column




# so long as the column names at the top of the .csv does not change, the key:value pair for DictRead will work


