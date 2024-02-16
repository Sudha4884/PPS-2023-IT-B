#  whether a number is palindrome or not
n = int(input("enter any number: "))
r = n
rev_num = 0
while r!= 0:
   digit = r % 10
   rev_num = (rev_num * 10) + digit
   r //= 10
if n == rev_num:
   print(n, "is a palindrome number")
else:
   print(n, "is not a palindrome number")