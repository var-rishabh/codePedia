# program to add n number of integers

sum = 0
totalNumbers = int(input("How many number do you want to add? : "))
for i in range(1, totalNumbers + 1):
    a = int(input(f"Enter number {i}: "))
    sum += a
print("Sum is: ", sum)
