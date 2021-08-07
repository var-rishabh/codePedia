# program to print n even numbers
num = int(input("Enter a number: "))
print("Even numbers are: ")
for x in range(0, num+1):
    if x%2 == 0:
        print(x)
        

#============================================================================
#============================================================================


# program to print n odd numbers
num = int(input("Enter a number: "))
print("Odd numbers are: ")
for x in range(0, num+1):
    if x%2 != 0:
        print(x)
          

#============================================================================
#============================================================================


# program to check a number is even or odd
num = int(input("Enter a number: "))
if num%2 == 0:
    print(f"{num} is Even.")
else:
    print(f"{num} is Odd.")
    