# Python function that doubles each character in a given string:
def double_characters(input_string):
    return ''.join(char * 2 for char in input_string)

# Example usage:
input_str = "now"  # Replace this with your desired string
result = double_characters(input_str)
print(f"The string with doubled characters: {result}")