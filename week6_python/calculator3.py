# learning about error handeling in Python: Exceptions

def get_int(prompt):
    while True: #continuously loops, so that the user gets prompted again and again for the right input
        try:
            return int(intput(prompt))
        except ValueError:
            print("This is not an integer")

def main():
    x = int(input("x: "))
    y = int(input("y: "))

    print (x + y)

main()
