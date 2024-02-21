def sortList(comList):
    negList = []
    for i in comList:
        if i < "0":
            negList.append(i)
    print(negList)

comList = []
print("enter five strings")
for i in range(5):
     comList.append(input())
sortList(comList)