# program to find the factors of a number

num = int(input("Enter a number: "))
print("The factors of",num,"are:")
for i in range(1, num + 1):
   if num % i == 0:
       print(i)
