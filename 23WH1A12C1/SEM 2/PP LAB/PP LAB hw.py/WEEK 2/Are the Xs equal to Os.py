 # Python function that checks if the count of Xs and Os in a given string is equal:
def check_xo_balance(input_string):
    x_count = input_string.lower().count('x')
    o_count = input_string.lower().count('o')
    return x_count == o_count

# Example usage:
test_string = "XxOoXxOo"  # Replace this with your desired string
result = check_xo_balance(test_string)
print(f"The string '{test_string}' has balanced Xs and Os: {result}")