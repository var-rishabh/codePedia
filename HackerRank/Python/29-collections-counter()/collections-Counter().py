# Enter your code here. Read input from STDIN. Print output to STDOUT

from collections import Counter

X = int(input())
shoe_size = Counter([i for i in input().split(" ")])

N = int(input())

orders = []
for i in range(N):
    orders.append([i for i in input().split(" ")])

total_price = 0

for j in orders:
    if shoe_size[j[0]] >= 1:
        total_price += int(j[1])
        shoe_size[j[0]] -= 1
        
print(total_price)