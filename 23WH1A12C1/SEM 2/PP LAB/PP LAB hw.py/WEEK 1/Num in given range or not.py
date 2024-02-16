# Implement a program to check whether the number is in a given range
n=int(input("enter any number b/w 10 and 21: "))
if n in range(10, 21):
    print("number is between 10 (inclusive) and 21 (exclusive)")
else:
    print("outside of range!")