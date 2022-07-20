def merge_the_tools(string, k):
    n = []
    j = []
    for x in range(1, len(string)+1):
        if x%k == 0:
            j.append(string[x-1])
            n.append(j)
            j = []
        else:
            j.append(string[x-1])
    for i in n:
        res = []
        [res.append(x) for x in i if x not in res]
        for j in res:
            print(j, end="")
        print()

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)