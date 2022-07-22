# Solution 1

from itertools import product

A= map(int,input().split())
B= map(int,input().split())

print(*product(A,B))
    
    
# ------------------------------------------------------
# ------------------------------------------------------


# Solution 2

A = input().split(" ")
B = input().split(" ")

for i in A:
    for j in B:
        print(tuple((int(i), int(j))), end = " ")