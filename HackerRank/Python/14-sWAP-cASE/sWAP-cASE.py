def swap_case(s):
    p = ''
    for x in range(len(s)):
        if s[x].islower():
            p += s[x].upper()
        else:
            p += s[x].lower()
    return p

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)