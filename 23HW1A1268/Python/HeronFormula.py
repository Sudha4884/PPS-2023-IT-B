a = int(input())
b = int(input())
c = int(input())
s = (a + b + c) / 2
area = pow((s * (s-a) * (s-b) * (s-c)),1/2)
print(area)