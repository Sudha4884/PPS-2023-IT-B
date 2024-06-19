def removfre(sentence,word):
    return sentence.replace(word,"")

sentence = input("enter:")
word = input("ennter:")
print(removfre(sentence,word))