# Implement a program to find the greatest among 3 numbers
a=int(input("enter 1st nums: "))
b=int(input("enter 2nd nums: "))
c=int(input("enter 3rd nums: "))
if (a>b) and (a>c):
    print(a,"is greater")
elif (b>c) and (b>a):
    print(b,"is greater")
else:
    print(c,"is greater")