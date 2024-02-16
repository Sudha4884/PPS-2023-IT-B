# Python function that calculates the discounted price based on the full price and discount percentage:
def calculate_discounted_price(full_price, discount_percentage):
    if 0 <= discount_percentage <= 100:
        discount_amount = (discount_percentage / 100) * full_price
        discounted_price = full_price - discount_amount
        return discounted_price
    else:
        raise ValueError("Discount percentage should be between 0 and 100.")

# Example usage:
original_price = 100  # Replace this with your desired full price
discount_percentage = 20  # Replace this with your desired discount percentage
result = calculate_discounted_price(original_price, discount_percentage)
print(f"The discounted price is: {result}")
