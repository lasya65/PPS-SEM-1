#This is a program to find the mode of a list of numbers.
#The mode is the number that appears most frequently in the list.
#If there are multiple modes, all of them are printed.
#The program takes a list of numbers as input and prints the mode(s).
numbers = input("Enter a list of numbers separated by spaces: ")   
numbers = numbers.split()
numbers = [int(x) for x in numbers]
mode = []
max_count = 0
for i in numbers:
    count = numbers.count(i)
    if count > max_count:
        max_count = count
        mode = [i]
    elif count == max_count:
        mode.append(i)
mode = list(set(mode))
print("Mode(s):", mode)
