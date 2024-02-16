def decimal_to_binary(decimal_number):
    if 0 <= decimal_number < 1024:
        binary_representation = bin(int(decimal_number))[2:]
        return binary_representation.zfill(10)
    else:
        raise ValueError("Decimal number must be between 0 and 1023.")

# Example usage:
decimal_value = 74.25  # Replace this with your desired decimal number
binary_result = decimal_to_binary(decimal_value)
print(f"The binary representation of {decimal_value} is: {binary_result}")