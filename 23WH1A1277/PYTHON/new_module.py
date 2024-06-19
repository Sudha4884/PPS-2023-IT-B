# geometric_shapes.py

import math

def square_area(side_length):
    return side_length**2

def rectange_area(side_length, side_width):
    return side_length * side_width

def circle_area(radius):
    return math.pi * radius ** 2

def rectangle_perimeter(side_length,side_width):
    return 2 * (side_length + side_width)

def circle_circumference(radius):
    return 2 * math.pi * radius

def cube_volume(side_length):
    return side_length ** 3

l = 23
r = 4
w = 34

print(square_area(l),rectange_area(l,w)
,circle_area(r),
rectangle_perimeter(l,w),
circle_circumference(r),
cube_volume(l))