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

print("Your rent is $", user_rent, "and that is", round(rent_percent*100), "% of your income.")
print("Your utilities is $", user_utilities, "and that is", round(uitilites_percent*100), "% of your income.")
print("Your groceries is $", user_groceries, "and that is", round(groceries_percent*100), "% of your income.")
print("Your transportatoin is $", user_transport, "and that is", round(trasnport_percent*100), "% of your income.")
print("You should save", save_amount, "and that is 10 % of your income.")
if(user_spend >=0):
    print("You have $", user_spend, "of spending money each month!")
else: print("You have $", user_spend, "try to cut back on your expenses.")