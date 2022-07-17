if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
n = student_marks[query_name]
sum = 0.00;
sum = float(sum)
for x in n:
    sum += x;
print("%.2f"%(sum/3))