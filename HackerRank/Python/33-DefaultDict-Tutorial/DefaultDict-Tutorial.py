# Enter your code here. Read input from STDIN. Print output to STDOUT

from collections import defaultdict
d = defaultdict(list)
n, m = map(int,input().split())
x = []
for i in range(1, n+m+1):
    c = input()
    if(i > n):
        if(d[c] == []):
            d[c].append(-1)
            x.append(d[c])
        else:
            x.append(d[c])
    else:
        d[c].append(i)

for i in range(m):
    print(" ".join(list(map(str,(x[i])))))