#CW Loops

import random #library imported at the top

start = 0

while start <= 18:
    start += 2
    print(start)

goose = random.randint(1,25)
count = 1

while count != goose:
    print("Duck")
    count += 1

print("Goose")

number = random.randint(1,20)

while True:
    guess = int((input("Guess a number: ").strip()))
    if guess ==number:
        print(f"A winner is you! The number was indeed {number}")
        break
    elif guess < number:
        print("Guess higher")
    else:
        print("Guess Lower")