if __name__ == '__main__':
    arr = []
    for _ in range(int(input())):
        name = input()
        score = float(input())       
        arr.append([score,name])
    arr.sort()
    for i in range(len(arr)):
         if arr[i][0]> arr[0][0]:
            print(arr[i][1])            
            if i+1 >= len(arr) or arr[i+1][0] > arr[i][0]:
                break    