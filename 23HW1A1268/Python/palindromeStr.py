def palindrome(str1):
    if str1 == str1[::-1]:
        return True
    else:
        return False

string = input("Enter a word ")
print(palindrome(string))