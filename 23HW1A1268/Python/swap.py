a = int(input())
b = int(input())

#swap with variable
print(a,b)
t = a
a = b
b = t
print("After swap",a,b)

#swap without variable
print(a,b)
a = a+b
b = a-b
a = a-b
print("After swap",a,b)