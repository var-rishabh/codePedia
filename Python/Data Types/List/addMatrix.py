# program to add two matrices using nested loop

X = [[0,0,0],
         [0,0,0],
         [0,0,0]]
Y = [[0,0,0],
         [0,0,0],
         [0,0,0]]

for i in range(3):
    for j in range(3):
        x = int(input(f"Enter element X[{i+1}][{j+1}]: "))
        X[i][j] = x
print("\n")
for i in range(3):
    for j in range(3):
        x = int(input(f"Enter element Y[{i+1}][{j+1}]: "))
        Y[i][j] = x
print("\n")

result = [[0,0,0],
         [0,0,0],
         [0,0,0]]

for i in range(len(X)):
   for j in range(len(X[0])):
       result[i][j] = X[i][j] + Y[i][j]
        
print("Sum is:")

for r in result:
   print(r)
   
   
#============================================================================
#============================================================================


# program to add two matrices using list comprehension

X = [[0,0,0],
         [0,0,0],
         [0,0,0]]
Y = [[0,0,0],
         [0,0,0],
         [0,0,0]]

for i in range(3):
    for j in range(3):
        x = int(input(f"Enter element X[{i+1}][{j+1}]: "))
        X[i][j] = x
print("\n")
for i in range(3):
    for j in range(3):
        x = int(input(f"Enter element Y[{i+1}][{j+1}]: "))
        Y[i][j] = x
print("\n")

result = [[X[i][j] + Y[i][j]  for j in range(len(X[0]))] for i in range(len(X))]

print("Sum is:")
for r in result:
   print(r)