#CW silly sentences

pronoun1 = input("Provide a pronoun: ").strip().lower()
verb1 = input("Provide a verb (past tense): ").strip().lower()
verb2 = input("Provide a verb (-ing): ")
noun1 = input("Provide a noun: ").strip().lower()
noun2 = input("Provide a noun (plural): ").strip().lower()
noun3 = input("Provide a noun (proper place): ").strip().title()
animal = input("Provide an animal (plural): ").strip().capitalize()
preposition1 = input("Provide a preposition: ").strip().lower()
number = input("Provide a number (e.g. 0): ").strip()

sentence1 = "Wether " + pronoun1 + " wanted it or not, " + pronoun1 + " have " + verb1 + " into a " + noun1 + " with the " + animal + " of " + noun3 + "."
sentence2 = "So let's get to " + verb2 + " " + preposition1 + " their " + noun2 + " " + number + " by " + number + "."
print()
print(sentence1)
print(sentence2)