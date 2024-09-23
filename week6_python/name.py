# C
string answer = get_string("what is your name?");
printf("Hello, %s\n, answer);



# python
answer = get_string("What is your name?")
print("Hello,  " + answer) # the + concatenates the string on the right to the left



# python with f string (format string)
answer = get_string("What is your name?")
print(f"Hello, {answer}") # prefixing the f before the quotatio marks will interpolate whatever is inside the curly braces
