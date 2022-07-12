# Solution 1

s = input()
a = s.split(' ')
n = int(a[0])
m = int(a[1])
j = m
i = 1
for x in range(1, n//2 + 1):
    print("-"*((m-3)//2), end="")
    print(".|."*i, end="")
    print("-"*((m-3)//2))
    m -= 6
    i += 2
i -= 2
print("-"*((j-7)//2) + "WELCOME" + "-"*((j-7)//2))
for x in range(1, n//2 + 1):
    print("-"*((j-(i*3))//2), end="")
    print(".|."*i, end="")
    print("-"*((j-(i*3))//2))
    i -= 2
    
# ------------------------------------------------------
# ------------------------------------------------------


# Solution 2

x,y = map(int,input().split())
items = list(range(1,x+1,2))
items = items+items[::-1][1:]
for i in items:
    text= "WELCOME" if i == x else '.|.'*i
    print (text.center(y,'-'))