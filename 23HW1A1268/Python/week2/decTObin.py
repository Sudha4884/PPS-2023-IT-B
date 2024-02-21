def binary(n,bin):
    if 0<num & num<=1024:
        if num % 2 == 0:
            bin += "0"
            binary(num/2,bin)
        else:
            bin += "1"
            binary((num-1)/2,bin)
    return bin

num = int(input())
bin = binary(num,bin = "")
print(bin[::-1])