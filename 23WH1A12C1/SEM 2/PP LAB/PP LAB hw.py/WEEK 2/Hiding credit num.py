# Python function that masks (hiding) all characters of a credit card number with asterisks except the last four digits:
def mask_credit_card(card_number):
    if len(card_number) >= 4:
        masked_part = '*' * (len(card_number) - 4)
        visible_part = card_number[-4:]
        masked_card = masked_part + visible_part
        return masked_card
    else:
        raise ValueError("Credit card number should have at least 4 digits.")

# Example usage:
credit_card_number = "4444444444444444"  # Replace this with your desired credit card number
masked_result = mask_credit_card(credit_card_number)
print(f"The masked credit card number: {masked_result}")