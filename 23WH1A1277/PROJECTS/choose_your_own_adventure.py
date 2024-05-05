#choose your adventure game in python done on 04/05/2024

name = input("Type your name: ")
print("Welcome",name,"to this advnture!")

answer = input("You are on a dirt road, it has come to an end and you can go left or right. Which way would you like to go?").lower()

if answer=="left":
    river = input('you come to a river, you can walk around it or swim across? type walk to walk around and swim to swim across.')
    if river=='swim:':
        print("you swam across and were eaten by an alligtor.")
    elif river=='walk':
        print("you walked for many miles, ran out of water and you lost the game.")
    else:print('not a valid option. you lose.')

elif answer=="right":
    birdge = input("YOu come to a birdge, it looks woobly,do you want to cross it or head back? (cross/back)")
    if birdge=='cross':
        stranger = input("you cross the bridge and meet a stranger. Do you talk to them?(yes/no)")
        if stranger=='yes':
            print('you talk to stranger and they give you gold. you WIN!')
        elif stranger=='no':
            print('you ignored the stranger and they are offended and you lose.')
        else:print('not a valid option. you lose.')

    elif birdge=='back':
        print("you go back and lose.")
    else:print('not a valid option. you lose.')
else:print('not a valid option. you lose')

print('Thank you for trying',name)
