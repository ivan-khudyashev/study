# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print("\n#1. Adding with append()")
    shopping = ["bread", "milk", "eggs"]
    shopping.append("apple")
    print(shopping)
    print("\n#2. Filling empty list with append()")
    shopping = []
    shopping.append('bread')
    shopping.append('milk')
    shopping.append('eggs')
    shopping.append('apple')
    print(shopping)
    print("\n#3. Adding with insert()")
    shopping.insert(2, 'ham')
    print(shopping)

def main():
    doAction()

if __name__ == "__main__":
    main()
