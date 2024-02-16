#Create a function in Python that accepts a single word and returns the number of vowels in that word. 
#In this function, only a, e, i, o, and u will be counted as vowels — not y.
# Python function that counts the number of vowels in a given word:

```python
def count_vowels(word):
    vowels = "aeiouAEIOU"
    vowel_count = sum(1 for char in word if char in vowels)
    return vowel_count

# Example usage:
input_word = "Python"  # Replace this with your desired word
result = count_vowels(input_word)
print(f"The word '{input_word}' has {result} vowels.")
```

This function iterates through each character in the word and checks if it is a vowel. The count of vowels is then returned. Note that both lowercase and uppercase vowels are counted in this example.