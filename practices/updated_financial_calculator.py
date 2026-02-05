#CW Financial Calculator

def callUserPrice(type):
    user_price = float(input(f"What is your monthly {type}: "))
    return user_price

user_income = callUserPrice("income")
user_rent = callUserPrice("rent/mortage")
user_utilities = callUserPrice("utitilites")
user_groceries = callUserPrice("groceries")
user_transport = callUserPrice("transportaiton")

def calculateIncomePercent(expense):
    user_percent = expense/user_income
    return user_percent

rent_percent = calculateIncomePercent(user_rent)
uitilites_percent = calculateIncomePercent(user_utilities)
groceries_percent = calculateIncomePercent(user_groceries)
trasnport_percent = calculateIncomePercent(user_transport)

save_amount = user_income * 0.1
user_spend = user_income-(user_rent + user_utilities + user_groceries + user_transport + (save_amount))

print()

def printOutput(type, expense, percent):
    print(f"Your {type} is ${expense} and that is, {round(percent*100)}% of your income")

printOutput("rent", user_rent, rent_percent)
printOutput("utiliies", user_utilities, uitilites_percent)
printOutput("groceries", user_groceries, groceries_percent)
printOutput("transportation", user_transport, trasnport_percent)
print("You should save", save_amount, "and that is 10 % of your income.")
if(user_spend >=0):
    print("You have $", user_spend, "of spending money each month!")
else: print("You have $", user_spend, "try to cut back on your expenses.")