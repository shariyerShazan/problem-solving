
Price_list = [
    "01", "Banana", 45.00, "unit",
    "02", "Mango", 80.00, "kg",
    "03", "Apple", 55.00, "kg",
    "04", "Papaya", 65.00, "unit",
    "05", "Guava", 35.00, "kg"
]

# 1
fruits = []
for x in range(0, len(Price_list), 4):
    fruit = [Price_list[x], Price_list[x+1], Price_list[x+2], Price_list[x+3]]
    fruits.append(fruit)

for a in fruits:
    for b in fruits:
        if a[2] > b[2]:
            swapping = a[:]
            a[:] = b
            b[:] = swapping

# fruits.reverse()

Price_list = []
for fruit in fruits:
    for element in fruit:
        Price_list.append(element)

print("Sorted Price_list :" , Price_list)






# 2 & 3
def searchFruit(name):
    for x in range(0, len(Price_list), 4):
        if Price_list[x+1].lower() == name.lower():
            print(f"{name} is found. Price: {Price_list[x+2]}")
            break
        else :
            print(f"{name} is not present in the list.")
searchFruit(input("Enter fruit's name here"))



# 4
def addFruit(id, name, price, unit):
    Price_list.extend([id, name, price, unit])
    print(Price_list)

addFruit("06", "Lichi", 90.00, "kg")



# 5
def printAbove_50():
    print("Fruits with price above 50:")
    for i in range(0, len(Price_list), 4):
        if Price_list[i+2] > 50:
            print(Price_list[i], Price_list[i+1], Price_list[i+2], Price_list[i+3])
        else:
            print("")

printAbove_50()



# 6

def deleteGuava(price_list):
    new_list = []
    for i in range(0, len(price_list), 4):
        if price_list[i+1] != "Guava":
            new_list.extend(price_list[i:i+4])
    return new_list

Price_list = deleteGuava(Price_list)

print("Updated list after deleting Guava:", Price_list)
