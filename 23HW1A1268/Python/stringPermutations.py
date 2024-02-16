#string permutations
from itertools import permutations 

word = input()
per = permutations(word)
for i in per:
    print(''.join(i))
    if i == word:
        break
