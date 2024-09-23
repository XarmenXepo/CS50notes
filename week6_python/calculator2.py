# learning about truncation in mathematical calculations
# python does not truncate results and can return a float, unlike C

x = int(input("x: "))
y = int(input("y: "))

z = x / y
print(z) # this simply prints out z

print(f"{z:.50f}") # use f to specific floating point precision, in this case to the 50th decimal
