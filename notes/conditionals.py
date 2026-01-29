#CW Conditionals

username = input("What is your username: ").strip().lower()

number = int(input("Provide a number: ").strip())

if number < 10 and number >= -9:
    print(f"{number} is a single digit number")
elif number < 100 and number >= -99:
    print(f"{number} is a double digit number")
else: 
        print(f"{number} is a triple digit number")
        new_number = number*number
        if new_number > 1000:
             print(f"Suprise number! {new_number}")

if username == "lupus":
    print("Welcome Admin: lupus")
else: 
    print(f"Welcome User: {username}")

print("END OF LINE")