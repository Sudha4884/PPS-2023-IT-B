# Python function that filters out non-negative integers from a list:
def extract_integers(input_list):
    return [item for item in input_list if isinstance(item, int) and item >= 0]

# Example usage:
mixed_list = [3, "apple", 7, "banana", 42, "orange", 0]  # Replace this with your desired list
result = extract_integers(mixed_list)
print(f"The list with only non-negative integers: {result}")