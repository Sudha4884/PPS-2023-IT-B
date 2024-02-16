# Generate prime numbers of fibonacci series
num = int(input("Enter a number: "))

a = 1
b = 1
c = 0
count = 0
isPrime = True

while (count < num):
    isPrime = True
    c = a + b

    for i in range(2,c):
        if (c % i == 0):
            isPrime = False
            break

    if (isPrime):
        print (c)
        count = count + 1
    a = b
    b = c