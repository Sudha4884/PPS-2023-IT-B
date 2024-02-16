#Implement a python program which uses a Boolean function isdivisible to check the divisibility of two numbers.
def isdivisible(number, divisor):
    return number % divisor == 0

# Example usage:
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

if isdivisible(num1, num2):
    print(f"{num1} is divisible by {num2}")
else:
    print(f"{num1} is not divisible by {num2}")