# Python function that performs calculations based on the provided parameters:
def perform_calculation(num1, operator, num2):
    if operator == '+':
        return num1 + num2
    elif operator == '-':
        return num1 - num2
    elif operator == '*':
        return num1 * num2
    elif operator == '/':
        if num2 != 0:  # Avoid division by zero
            return num1 / num2
        else:
            raise ValueError("Division by zero is not allowed.")
    else:
        raise ValueError("Invalid operator. Use '+', '-', '*', or '/'.")

# Example usage:
result = perform_calculation(6, '*', 4)  # Replace these values with your desired parameters
print(f"The result of the calculation is: {result}")