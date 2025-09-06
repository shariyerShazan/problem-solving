name = 'shazan'
print(name)


for i in range (100):
   if i == 5 :
      break
   print(i)


priceList = [12 , 23, 54,  56 , 94 , 83 ,44 , 83 , "name"]

for i in range(0 , len(priceList)):
    print(priceList[i])


priceList = [ 1 , "mango", 70 , 2 , "apple" , 45 , 3 , "lichi" , 100]

for  i in range(0 , len(priceList) ,3) : 
    
    if i == 3 :
        continue
    print(priceList[i] , priceList[i + 1 ] , priceList[i + 2])



priceList = [
    {"number": 1, "name": "mango", "price": 70},
    {"number": 2, "name": "banana", "price": 30},
    {"number": 3, "name": "apple", "price": 100}
]

for item in priceList:
    number = item["number"]
    name = item["name"]
    price = item["price"]
    print(f"{number} = {name} : {price} taka")





for i in range (100):
   if i == 3 :
      break


name = ["shazan" , "lamia"]
age = 5 #number
age2 = 3.5 #float

name = "lamia" # sring



name = input("enter your name here: ")
age = int(input("enter your age here: "))
age2 = int(input("enter your age2 here: "))

plus = age + age2
print(plus)



age = int(input("enter your age here: "))

if age < 18 :
    print("you can't vote")
else : 
    print("you can vote")


mark = int(input("enter your mark here: "))
if mark < 33 :
    print("you are failed . and your grading point is 0")
elif mark < 50 :
    print("well you passed , your grading point is 'E' ")
elif mark < 60 :
    print("good you passed , your grading point is 'B' ")    
elif mark < 70 :
    print("well you passed , your grading point is 'A-' ")
elif mark < 80 :
    print("verry good you passed , your grading point is 'A' ")
elif mark <= 100 :
    print("verry good you passed , your grading point is 'A+' ")
else :
    print("your mark is invalid")