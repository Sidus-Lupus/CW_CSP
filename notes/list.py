#CW Lists

numbers = [1,2,3,4,5,6,7,67,8,69,9,10]
names = ["Josh", "Cannon", "Treyvon", "Nobody", "Lupus", "Keen"]

print(len(names))
names[0] = "Joshua"
names.append("Ren") #adds to the end of the list
index = names.index("Joshua")
names.pop(index) #removes item from the list based on index (or the end if no index is given)
print(names)

for name in names:
    print(f"Hello {name}")

for number in numbers: 
    print(f"{number} - 10 = {number-10}")