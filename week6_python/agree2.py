s = input("Do you agree?")
# s = input("Do you agree?").lower()

s = s.lower()

if s in ["y", "yes"]:
    print("Agree")
elif s in ["n", "no"]:
    print("Disagree")

# using a list, we can include more items to handle user input
# python is an Object Oriented Programing language
# objects have functionality in itself, such as the function .lower()

# using .lower() forces all user input to become lowercases, thus handling all different of user input permutations

# s = input("Do you agree?").lower()
# immediately assigned the entire value of user input to lowercase, on the same line.
