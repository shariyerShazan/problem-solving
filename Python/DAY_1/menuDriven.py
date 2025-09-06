def is_palindrome(n):
    return str(n) == str(n)[::-1]

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def is_perfect(n):
    sum_div = 0
    for i in range(1, n):
        if n % i == 0:
            sum_div += i
    return sum_div == n

while True:
    print("\nMenu:")
    print("1. Check Palindrome")
    print("2. Check Prime Number")
    print("3. Check Perfect Number")
    print("4. Exit")

    choice = input("Enter your choice (1-4): ")

    if choice == "1":
        num = int(input("Enter a number to check palindrome: "))
        if is_palindrome(num):
            print(f"{num} is a Palindrome")
        else:
            print(f"{num} is NOT a Palindrome")

    elif choice == "2":
        num = int(input("Enter a number to check prime: "))
        if is_prime(num):
            print(f"{num} is a Prime Number")
        else:
            print(f"{num} is NOT a Prime Number")

    elif choice == "3":
        num = int(input("Enter a number to check perfect number: "))
        if is_perfect(num):
            print(f"{num} is a Perfect Number")
        else:
            print(f"{num} is NOT a Perfect Number")

    elif choice == "4":
        print("Exiting program. Goodbye!")
        break

    else:
        print("Invalid choice. Please enter 1-4.")
