#CW time of day

current_time = int(input("What is the current time of day (24 hour time. E.g. 5:30 pm is 1730): ").strip())
 
display_language = input("Please choose English or German: ").strip().lower()

print()

def displayTimeEnglish ():
    if current_time >= 600 and current_time < 1200:
        print("Good morning user")
    elif current_time >= 1200 and current_time < 1800:
        print("Good afternoon user")
    else:
        print("Good evening user")

def displayTimeGerman ():
    if current_time >= 600 and current_time < 1200:
        print("Guten Morgen Benuzter")
    elif current_time >= 1200 and current_time < 1800:
        print("Guten Tag Benuzter")
    else:
        print("Guten Abend Benuzter")

if display_language == "english":
    displayTimeEnglish()
elif display_language == "german":
    displayTimeGerman()
else:
    print("Please choose English or German")

print("END OF LINE")