# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print("\n#1. Test indeces")
    shopping = ["bread", "milk", "eggs"]
    print(shopping[1])
    print("\n#2. Test assigning with index")
    shopping[1] = "banana"
    print(shopping)
    print("\n#3. Test backward indeces")
    print(shopping[-1])
    print("\n#4. Test slicing")
    print(shopping[0:2])
    print(shopping[:3])
    print(shopping[1:])

def main():
    doAction()

if __name__ == "__main__":
    main()
