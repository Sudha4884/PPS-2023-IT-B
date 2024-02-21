def checkXO(X,O):
    if X != O:
        return False
    else:
        return True

string = input()
countX, countO = 0,0
for i in string:
    if i == "X":
        countX += 1
    elif i == "O":
        countO += 1
print(checkXO(countX,countO))