# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import permutations

s, k = input().split()
k = int(k)

print(*[''.join(i) for i in permutations(sorted(s), int(k))], sep='\n')