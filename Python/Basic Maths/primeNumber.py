# program to print prime numbers

num = int(input("Enter a number: "))
for x in range(1, num + 1):
    for i in range(2, x):
        if (x % i) == 0:
            break
    else:
        print(x)


#============================================================================
#============================================================================


# program to print all the prime numbers within an interval

lower = int(input("Enter lower limit: "))
upper = int(input("Enter upper limit: "))
print("Prime numbers between", lower, "and", upper, "are:")
for num in range(lower, upper + 1):
    for i in range(2, num):
        if (num % i) == 0:
            break
    else:
        print(num)


#============================================================================
#============================================================================