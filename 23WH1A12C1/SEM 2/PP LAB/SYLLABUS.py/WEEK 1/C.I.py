#Write a program to calculate compound interest when principal,
# rate and number of periods are given.
def compound_interest(principal, rate, time):
    Amount = principal * (pow((1 + rate / 100), time))
    CI = Amount - principal
    print("Compound interest is", CI)
compound_interest(80000,2,2)