def checkVowel(word,vowels):
    count = 0
    for i in word:
        for x in range(5):
            if i == vowels[x]:
                count += 1
    return count

word = input()
vowels = ["a","e","i","o","u"]

print(checkVowel(word,vowels))