a = int(input())
b = int(input())
c = int(input())
if (a > b) & (a > c):
    print("Max =",a)
elif (b > a) & (b > c):
    print("Max =",b)
else:
    print("Max =",c)