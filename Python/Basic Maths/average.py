# program to find average of three numbers

num1 = float(input("Enter number 1 : "))
num2 = float(input("Enter number 2 : "))
num3 = float(input("Enter number 3 : "))
average = (num1 + num2 + num3)/3
print(f"Average is : {average}")


#============================================================================
#============================================================================


# program to find average of n numbers

numbers = eval(input("Enter numbers in list : "))
l = len(numbers)
sum = 0
for x in numbers:
    sum += x 
average = sum/l
print(f"Average is : {average}")


#============================================================================
#============================================================================