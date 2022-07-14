def print_formatted(n):
    l = format(n, "b")
    for x in range(1, n+1):
        decimal = (len(l) - len(str(x)))*" " + str(x)
        octa = format(x, "o")
        octal = (len(l) - len(octa))*" " + str(octa)
        hexa = format(x, "X")
        hexadecimal = (len(l) - len(hexa))*" " + str(hexa)
        bin = format(x, "b")
        binary = (len(l) - len(bin))*" " + str(bin)
        print(decimal, octal, hexadecimal, binary)

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)