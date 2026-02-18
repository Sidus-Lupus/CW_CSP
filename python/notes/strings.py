#CW Strings

username = input("Declare Username: ").strip().upper()

print("New user:", username)
print("Welcome", username)

"""print(sentence[start:start+len(word)])"""


sentence = "wether we wanted it or not we've stepped into a war with the cabal on mars."
print(sentence)

word = input("Pick a word from the sentence to change: ").strip().lower()
new = input("Replace with: ").strip().lower()

start = sentence.find(word)
sentence = sentence.replace(word, new)
print(username + ", printing sentence...")
print(sentence)

print(f"Repeating username: {username}")