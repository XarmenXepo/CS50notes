words = set() #a set in python is a set of things that will not contain duplicates. Duplicates will be filtered out

def check(word):
    return word.lower() in words

def load(dictionary):
    with open(dictionary) as file:
        words.update(file.read().splitlines())
    return True



def size():
    return len(words)

def unload():
    return True #Python handles memory allocation, pointing memory and freeing unused memory

# python takes up more memory/RAM and is slower than C
# Python manages memory on behalf of the user, relative to C where memory is specifically allocated by user
