def prime(num):
    for i in range(2,num):
        if num % i == 0:
            print("It is not prime")
            break
    else:
        print("It is prime")
            #break

num = int(input())
prime(num)