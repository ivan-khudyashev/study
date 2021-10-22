# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print("\n#1. len() function example")
    shopping = ["bread", "milk", "eggs"]
    print(len(shopping))
    print("\n#2. Concatenation with + op")
    list1 = [1, 2, 3]
    list2 = [4, 5, 6]
    final_list = list1 + list2
    print(final_list)
    print("\n#3. Repetition with * op")
    list3 = ['oi']
    print(list3 * 3)

def main():
    doAction()

if __name__ == "__main__":
    main()
