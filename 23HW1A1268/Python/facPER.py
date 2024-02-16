def perfect(num):
    sum = 0
    for i in range(1,num):
        if num % i == 0:
            sum += i
    if sum == num:
        print(num,"is Perfect number")
    else:
        print(num,"is not perfect number")

num = int(input())
for i in range(1,num):
    if num % i == 0:
        perfect(i)
