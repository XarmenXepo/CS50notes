# the more Pythonic way (less lines of code) of using Python to tally some numbers in the .csv files
import csv # csv is a Python module that opens & reads csv files

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts ={}

    for row in reader:
        favorite = row["genres"]
        if favorite in counts:
            counts[favorite] += 1 # if this genre has been seen before, add 1 more
        else:
            counts[favorite] = 1 # if this is the first tme that genre is seen, initialize value to 1

for favorite in counts: # iterates over every key in the dictioary, is not sorted
    print(f"{favorite}: {counts[favorite]}")



print("\n####### line break ########\n")



for favorite in sorted(counts): # iterates over every key, and sorts by dictionary, alphabetically
    print(f"{favorite}: {counts[favorite]}")



print("\n####### line break ########\n")



for favorite in sorted(counts, key=counts.get): # iterates over every key, and sorts by counts from lowest to highest
    # use reverse=True if wanting to sort counts from highest to lowest
    print(f"{favorite}: {counts[favorite]}")



# this will ensure that shoud there be a new key:value pair, it will be printed out as well
