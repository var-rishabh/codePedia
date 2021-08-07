# program to add two numbers
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))
sum = num1 + num2
print("Sum is: ", sum)


#============================================================================
#============================================================================


# program to add n number of integers
sum = 0
totalNumbers = int(input("How many number do you want to add? : "))
for i in range(1, totalNumbers + 1):
    a = int(input(f"Enter number {i}: "))
    sum += a
print("Sum is: ", sum)


#============================================================================
#============================================================================