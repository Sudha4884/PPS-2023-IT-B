num = int(input())
sum = 0
while num > 0:
    rem = num % 10
    print(pow(rem,3))
    sum += pow(rem,3)
    num //= 10
print(sum)
while sum != num:
    print("It is armstrong number")
    break
if num == sum:
    print("It is armstrong number")
else:
    print("It is not armstrong number")