#CW Financial Calculator

user_income = float(input("What is your monthly income: "))
user_rent = float(input("What is your monthly rent/mortage: "))
user_utilities = float(input("What is your montly utitilites bill: "))
user_groceries = float(input("What is your monthly groceries cost: "))
user_transport = float(input("What is your monthly transportaiton fees: "))


rent_percent = user_rent/user_income
uitilites_percent = user_utilities/user_income
groceries_percent = user_groceries/user_income
trasnport_percent = user_transport/user_income

save_amount = user_income * 0.1
user_spend = user_income-(user_rent + user_utilities + user_groceries + user_transport + (save_amount))
print()
if(user_income = 0):
        print("Your rent is $", user_rent, "and that is", round(rent_percent*100), "% of your income.")
        print("Your utilities is $", user_utilities, "and that is", round(uitilites_percent*100), "% of your income.")
        print("Your groceries is $", user_groceries, "and that is", round(groceries_percent*100), "% of your income.")
        print("Your transportatoin is $", user_transport, "and that is", round(trasnport_percent*100), "% of your income.")
        print("You should save", save_amount, "and that is 10 % of your income.")
        if(user_spend >=0):
            print("You have $", user_spend, "of spending money each month!")
        else: print("You have $", user_spend, "try to cut back on your expenses.")
    
else: print("divide by 0 error")
