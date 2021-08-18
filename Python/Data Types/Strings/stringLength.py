# program to find length of a string using len() function

str = input("Enter a string: ")
len = len(str)
print(f"Length of string is : {len}")
    

#============================================================================
#============================================================================


# program to find length of a string without using len() function
    
str = input("Enter a string: ")
length = 0
for x in str:
    length += 1
print(f"Length of string is : {length}")

#============================================================================
#============================================================================