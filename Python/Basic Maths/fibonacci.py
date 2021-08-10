# program to print fibonacci series

num = int(input("Enter a number: "))
n1, n2, n3 = 0, 1, 0
print("Fibonacci Series is : ")
print("0 1 ", end="")
for x in range(2, num):
    n3 = n2 + n1
    print(n3, end=" ")
    n1 = n2
    n2 = n3