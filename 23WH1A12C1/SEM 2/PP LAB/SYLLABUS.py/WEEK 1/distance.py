#Given coordinates (x1, y1), (x2, y2) find the distance between two points
def distance(x1,y1,x2,y2):
    return( ((x2-x1)**2+(y2-y1)**2)**0.5)
print(distance(1,1,5,4))