def collatz(x):
    count = 0
    while x != 1:
        if x % 2 == 0:
            count += 1
            x = x / 2
            print(x)
        else:
            count += 1
            x = 3 * x + 1
            print(x)
    return count

num = int(input())
print("Number of steps",collatz(num))