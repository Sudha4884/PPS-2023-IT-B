a = int(input())
b = int(input())
c = int(input())
if (a*a == b*b + c*c) | (b*b == a*a + c*c) | (c*c == b*b + a*a):
    print("Right angled triangle")
elif (a*a >= b*b + c*c) | (b*b >= a*a + c*c) | (c*c >= b*b + a*a):
    print("Obtuse angled triangle")
else:
    print("Acute angled triangle")
