# program to print factorial of a number

num = int(input("Enter a number: "))
factorial = 1
for x in range(1, num+1):
    factorial *= x
print(f"Factorial of {num} is : {factorial}")