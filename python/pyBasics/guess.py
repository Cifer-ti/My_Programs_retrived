secret_number = 9
guess_count = 0
solved = False
guess_limit = 3

while guess_count < guess_limit:
    guess = int(input("Guess: "))
    if guess == secret_number:
        break
    guess_count += 1

if guess_count < 3:
    print("Watashi no kachi da")
else:
    print("Sorry trials exceeded")
