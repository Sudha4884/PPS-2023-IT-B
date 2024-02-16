text = open('C:\Mythili\BTech\Python-PYcharm\College\\text.txt' , 'r')

text_lines = text.readlines()
for line in text_lines:
    print(line)

text.close()