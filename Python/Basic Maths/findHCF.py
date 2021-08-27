# program to find the H.C.F. of two input number

num1 = int(input("Enter number 1: ")) 
num2 = int(input("Enter number 2: "))
if num1 > num2:
    smaller = num2
else:
    smaller = num1
for i in range(1, smaller+1):
    if((num1 % i == 0) and (num2 % i == 0)):
        hcf = i 

print("The H.C.F. is", hcf)
