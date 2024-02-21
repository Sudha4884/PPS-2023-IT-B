from math import pi
def deg(rad):
    deg = rad * (180 / pi)
    return deg

rad = int(input())
print(deg(rad))