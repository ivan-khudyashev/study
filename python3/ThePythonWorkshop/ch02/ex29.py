# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print("\n#1. Create zip object")
    items = ['apple', 'orange', 'banana']
    quantity = [5, 3, 2]
    orders = zip(items, quantity)
    print(orders)
    print("\n#2. Convert zip object to list")
    print(list(orders))
    print("\n#3. Convert zip object to tuple")
    orders = zip(items, quantity)
    print(tuple(orders))
    print("\n#4. Convert zip object to dictionary")
    orders = zip(items, quantity)
    print(dict(orders))

def main():
    doAction()

if __name__ == "__main__":
    main()
