# Implement  a program to check whether the given year is leap year or not
year=int(input("enter year: "))
if year%4==0 and year%100!=0 or year%400==0:
    print("LEAP YEAR")
else:
    print("NOT A LEAP YEAR")