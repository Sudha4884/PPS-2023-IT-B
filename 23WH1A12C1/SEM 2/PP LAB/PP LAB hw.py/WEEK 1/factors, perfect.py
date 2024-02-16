
def find_factors_and_check_perfect(num):
    factors = [1]  # Start with 1 as it's always a factor
    for i in range(2, num // 2 + 1):
        if num % i == 0:
            factors.append(i)
            print(factors)
    sum_factors = sum(factors)
    
    if sum_factors == num:
        return f"{num} is a perfect number."
    else:
        return f"{num} is not a perfect number."

# Example usage:
number_to_check = 28  # You can replace this with any positive integer
result = find_factors_and_check_perfect(number_to_check)
print(result)