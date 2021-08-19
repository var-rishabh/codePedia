# program to swap two variables using a temporary variable

x = input('Enter value of x: ')
y = input('Enter value of y: ')
temp = x
x = y
y = temp
print(f'The value of x after swapping: {x}')
print(f'The value of y after swapping: {y}')


#============================================================================
#============================================================================


# program to swap two variables


x = input('Enter value of x: ')
y = input('Enter value of y: ')
x, y = y, x
print(f'The value of x after swapping: {x}')
print(f'The value of y after swapping: {y}')


#============================================================================
#============================================================================
