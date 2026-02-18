#CW functions

def hello(name):
    print(f"Hello {name}!")

def full_name(first_name, last_name):
    return f"{first_name} {last_name}"
print(f"Hello {full_name("Cannon", "Warren")}")
person_one = full_name("Lupus", "Sidereus")
print(f"The second person is {person_one}")
person = full_name("Remington", "Warren")
hello(person)
hello("Purple platapus")

def factorial(number):
    total = 1
    for x in range(number, 1, -1):
        total *= x
    return total

for y in range(1,10):
    print(f"The factorial of {y} is {factorial(y)}")

num = 1

def add():
    num = 3
    num += 1
    return num

print(add())
print(num)