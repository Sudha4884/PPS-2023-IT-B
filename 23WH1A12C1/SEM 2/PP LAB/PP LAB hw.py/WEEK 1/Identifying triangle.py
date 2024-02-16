# Check whether the triangle is scalene, isosceles, equilateral(Input the three sides of the triangle)
a = int(input("Enter the first side of triangle: "))
b = int(input("Enter the second side of triangle: "))
c = int(input("Enter the third side of triangle: "))
if (a==b==c):
    print("This sides form an equilateral triangle")
elif (a!=b!=c):
    print("This sides form an scalene triangle")
else:
    print("This sides form an isosceles triangle")