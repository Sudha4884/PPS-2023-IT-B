#method 1
def issorted(L):
    for i in range(len(L)-2):
        if L[i] < L[i+1]:
            pass
        else:
            return False
    return True

li = [int(i) for i in input().split()]
print(issorted(li))

#method 2
def issorted(L):
    List = L
    if sorted(List) == L:
        return True
    else:
        return False

li = [int(i) for i in input().split()]
print(issorted(li))
