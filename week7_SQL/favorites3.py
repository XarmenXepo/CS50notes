# using Python to tally some numbers in the .csv files
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
    Drama, Comedy, Action = 0, 0, 0

    for row in reader:
        favorite = row["genres"]
        if favorite == "Drama":
            Drama += 1
        elif favorite == "Comedy":
            Comedy += 1
        elif favorite == "Action":
            Action += 1
        # creates a variable 'favorite' and assigns it to the column 'genres'
        # looping through the values in the 'genres' column and adding 1 each time it finds either Drama, Comedy or Action

print(f"Drama: {Drama}")
print(f"Comedy: {Comedy}")
print(f"Action: {Action}")
# prints out the key: value pair, with the curly braces denoting the value in a dictionary


# so long as the column names at the top of the .csv does not change, the key:value pair for DictRead will work


