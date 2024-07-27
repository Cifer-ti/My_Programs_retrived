import random


def greet_user(name_):

    print(f"\nSate sate '{name_}' now I know your name")
    print("I will add it to the death note... cool right\n")

    response = input("But wait... Are you ready to play a game to spare your life ? (y/n) ")
    if response.lower() == "y":
        print("\nOkay let's do this. I will pick a number between 0 and 63, the you guess it")
        print("If you guess it right then you will be spared")

        pick = random.randint(0, 63)
        guess = int(input("I've picked the number what's your guess ?: "))

        if pick == guess:
            return True
        else:
            print(f"\nMy pick was {pick}. You know what's supping for you {name_}:)\n")
    else:
        print("Sate lucky meet you over there then.\n")
        return False


name = input("Present your self: ")
if greet_user(name):
    print(f"Sorry {name} you survived how unfortunate you are.")
else:
    print(f"Really luck smiles at you {name} good bye")
