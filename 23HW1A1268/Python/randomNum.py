def randomNum(count,onum,n):
    if count == 2:
        print("Sorry,you are out of chances")
        return
    else:
        if n == onum:
            print("Wow! You guessed it right")
            return
        else:
            print("Sorry! You guessed it wrong.")
            count += 1
            n = guess(n)
            randomNum(count,onum,n)


def guess(n):
    num = int(input("Enter a number from 1-10 "))
    return n

print("Hello! Ready to guess a number?")
ori_num = 6
count = 0
num = int(input("Enter a number from 1-10 "))

for i in range(0,3):
    randomNum(count,ori_num, num)
    break