def count_substring(string, sub_string):
    count, i = 0, 0
    for x in range(len(string)):
        if string[i:i+len(sub_string)] == sub_string:
            count += 1
        i+=1
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)