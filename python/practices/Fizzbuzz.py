#CW  Fizzbuzz


for i in range(1,51):
    if i % 3 == 0 and i % 5 == 0: 
        print("FizzBuzz")
    elif i % 3 == 0: 
        print("Fizz")
    elif i % 5 == 0: 
        print("Buzz")
    else: 
        print(i)
"""statement = ""
for i in range(1,51):
    if i%3 == 0 or i%5 == 0:
        if i%3 == 0:
            statement + "Fizz"
        if i%5 == 0:
            statement + "Buzz"
    else:
        statement = i
    print(statement)
    statement = ""
"""""