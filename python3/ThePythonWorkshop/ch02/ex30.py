# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print("\n#1. Create dictionary")
    orders = { 'apple':5, 'orange':3, 'banana':2 }
    print("\n#2. Print values in dictionary")
    print(type(orders.values()), orders.values())
    print(list(orders.values()))
    print("\n#3. Print keys in dictionary")
    print(list(orders.keys()))
    print("\n#4. Iterate items in dictionary")
    for t in list(orders.items()):
        print(t)

def main():
    doAction()

if __name__ == "__main__":
    main()
