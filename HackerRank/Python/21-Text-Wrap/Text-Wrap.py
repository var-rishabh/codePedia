import textwrap

def wrap(string, max_width):
    i = 0
    s = ""
    for x in range(len(string)):
        if i == max_width:
            s += "\n" + string[x]
            i = 1
        else:
            s += string[x]
            i += 1
    return s

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)