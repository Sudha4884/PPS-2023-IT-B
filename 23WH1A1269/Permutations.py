from itertools import permutations 
word = input()
per=permutations(word)
for string in per:
    print(''.join(string))
