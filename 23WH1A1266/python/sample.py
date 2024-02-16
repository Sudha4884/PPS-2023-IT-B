def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def print_primes_less_than(n):
    print("Prime numbers less than", n, "are:")
    for i in range(2, n):
        if is_prime(i):
            print(i, end=" ")

# Example usage:
given_number = 30
print_primes_less_than(given_number)
