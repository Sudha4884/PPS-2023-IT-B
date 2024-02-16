def checkprime(n):
    count = 0
    if n == 1:
        return 1
    for j in range(1,n):
        if n % j == 0:
            count += 1
    if count >= 2:
        return 1
    else:
        return 0
def printprime(num):
    for i in range(1, num + 1):
        if checkprime(i) == 0:
            print(i)

num = int(input(" Enter a number "))
printprime(num)