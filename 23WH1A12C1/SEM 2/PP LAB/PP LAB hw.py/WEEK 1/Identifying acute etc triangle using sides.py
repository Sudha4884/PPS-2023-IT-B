# Check whether the given triangle is acute , obtuse or right angled by entering 3 sides of the triangle
a = int(input("Enter the first input: "))               #  Acute triangles that can be formed are {10, 12, 15} and { 9, 10, 12 }.
b = int(input("Enter the second input: "))          # Right triangles that can be formed are {9, 12, 15}.
c = int(input("Enter the third input: "))  #obtuse triangles that can be formed are {2, 9, 10},{3, 9, 10}, {3, 10, 12} and {9, 10, 15}.
if ((a**2 + b**2 )>c**2):
    print("then it is acute triangle. ")               # If a2 + b2 > c2, then it is acute triangle.
elif ((a**2 + b**2 )==c**2):
    print("then it is right triangle. ")              # If a2 + b2 = c2, then it is right triangle.
else:
    print("then it is obtuse triangle. ")                  #If a2 + b2 < c2, then it is obtuse triangle