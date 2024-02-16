#Write a Python program to find those numbers which are divisible by 7 and multiples of 5, between 1500 and 2700
n= []
for x in range(1500, 2701):
    if (x % 7 == 0) and (x % 5 == 0):
        # If the conditions are met, convert the number to a string and append it to the list
        n.append(str(x))
print(','.join(n))