def perfectno(num):
    sum = 0
    for i in range(1,num):
        if num % i == 0:
            sum += i
    return sum

num = int(input(" Enter a number "))
if num == perfectno(num):
    print("Perfect number")
else:
    print("Not Perfect number")
