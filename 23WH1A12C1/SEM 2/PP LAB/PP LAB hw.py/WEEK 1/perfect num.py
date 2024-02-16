# Finding all the factors of a number and show whether it is a perfect number, i.e., the sum of
# all its factors (excluding the number itself) is equal to the number itself.
def Perfect_Number(num):
  count=num-1
  sum=0
  while count!=0:
    if num%count == 0:
      sum += count
    count-=1
  if sum == num:
    print(num,"is a perfect number")
  else:
    print(num,"is not a perfect number")
print(Perfect_Number(6))
print(Perfect_Number(28))
print(Perfect_Number(63))