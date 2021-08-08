# to print A

for row in range(8):
    for col in range(5):
        if ((col == 0 or col == 4) and row != 0) or ((col != 0 or col != 4) and (row == 1 or row == 4)):
            print("*", end="")
        else:
            print(end=" ")
    print()
    

#============================================================================
#============================================================================


# to print B

for row in range(7):
    for col in range(5):
        if (col == 0) or (col == 4 and (row != 0 and row != 3 and row != 6)) or ((row == 0 or row == 3 or row == 6) and col != 4):
            print("*", end="")  
        else:
            print(end=" ")
    print()

    
#============================================================================
#============================================================================