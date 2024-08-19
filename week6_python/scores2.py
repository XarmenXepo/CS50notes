# using Python's built in functionality to obtain the average of a sum of numbers
from cs50 import get_int

scores = [ ] # in Python we can initialize an empty list, unlike in C
for i in range(3): # obtains 3 inputs from user
    score = get_int("Score: ")
    scores.append(score) # alternately we can also concatenate scores: scores = scores + [score]

average = sum(scores) / len(scores)
print(f"Average: {average}") # remember to include f, to indicate we want to print the value of 'average' , not the string 'average'
