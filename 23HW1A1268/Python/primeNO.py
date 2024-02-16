def prime(n):
    count = 0
    for i in range(1,n+1):
        if n % i == 0:
            count += 1
    if count == 2:
        print(i,end = " ")
    else:
        return 
num = int(input())
for i in range(1,num):
    prime(i)
