def credCard(num):
    if len(num) == 16:
        for i in range(12):
            num[i] = "*"
        return ''.join(num)
    else:
        print("please re check your card number")
cardNo = input()
print(credCard(list(cardNo)))