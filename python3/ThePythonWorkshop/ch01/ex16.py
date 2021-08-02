# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def inputAge():
    age = -1
    while age < 1 or age > 144:
        print("Please, input your age:")
        age = int(input())
        if age < 7 or age > 90:
            print("Hm ... It's strange age for using computer.")
    return age

def doAction2():
    age = inputAge()
    if age >= 18:
        print('You can vote.')
        if age >= 21:
            print('You can play poker.')

def doAction1():
    age = 20
    if age >= 18 and age < 21:
        print('At least you can vote.')
        print('Poker will have to wait')

def main():
    doAction1()
    doAction2()

if __name__ == "__main__":
    main()
