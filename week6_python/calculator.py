#from cs50 import get_int

#x = get_int("x: ")
#y = get_int("y: ")

x = input("x: ")
y = input("y: ")
#using Python's input function instead of get_int from the cs50.h library
#concatenates strings, does not perform mathematical addition

a = int(input("a: "))
b = int(input("b: "))
#using int to convert the input to an integer
#python allows nesting of functions in this way
#however int does not perform error handling, in event user inputs a char or string instead of an integer
#get_int from the cs50 library will perform error handling

print(x + y) #x and y will be concatenated
print(a + b) #a and b will be mathematically added together
