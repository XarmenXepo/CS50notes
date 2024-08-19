//pseudo code for algorithms
//linear algorithm
//using an if, and omitting the else, makes sure to exploire all possible doors:
for each door from left to right
    if 50 is behind door
        return true
return false



//slightly more precise pseudo code for linear algorithm
for i from 0 to -1
    if 50 is behind door[i]
        return true
return false



//binary search (bi for searching either leftward or right ward, diving and conquering)
//check for doors first, as no doors means nothing to search
if no doors left
    return false
if 50 is behind door[middle]
    return true
else if 50 < door[middle]
    search door [0] through [middle - 1]
else if 50 > door[middle]
    search door [middle + 1] through doors[n - 1]