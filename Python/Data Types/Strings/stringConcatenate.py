# program to concatenate two strings

str1 = input("Enter first string: ")
str2 = input("Enter second string: ")
print(str1 + str2)
    

#============================================================================
#============================================================================


# program to concatenate n strings

num = int(input("How many strings do you want to concatenate? : "))
strings = ""
for x in range(num):
    i = input(f"Enter string{x+1}: ")
    strings += i
print(strings)
    

#============================================================================
#============================================================================