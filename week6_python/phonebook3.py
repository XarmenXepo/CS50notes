# iterating through a list of dictionaries {}, to find the input that user requested
# using a global list named 'people', that contains 3 dictionaries, with 2 key:value pairs containing a name and a phone number
people =[
    {"name": "Carter", "number": "+1 534-352-6356"},
    {"name": "David", "number": "+1 632-532-6321"},
    {"name": "John", "number": "+1 623-244-7774"},
]

name = input("name to search: ")

for person in people:
    if person["name"] == name:
        number = person["number"]
        print(f"Found {number}")
#       we do not need to use 'break' as we are not using a loop, which may need to be terminated early for various reasons

else:
    print("Not Found")
