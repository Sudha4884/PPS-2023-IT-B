# Program to find the sum of the digits of a number
n = input("Enter Number: ")
sum = 0
for i in n:
    sum = sum + int(i)
print(sum)