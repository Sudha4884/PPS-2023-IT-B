#Implement calculator operations using chained conditionals.
a = int(input("Enter the first input: "))
b = int(input("Enter the second input: "))
oper = input("Enter the type of operation you want to perform (+, -, *, /, %): ") # oper = operator
result = 0
if oper == "+":
    result = a+b
elif oper == "-":
    result = a-b
elif oper == "*":
    result = a*b
elif oper == "/":
    result = a//b # Integer Division
elif oper == "%":
    result = a%b
else:
    print("Invalid Input")
print("Your answer is: ",result)