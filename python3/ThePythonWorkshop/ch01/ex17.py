# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    age = 20
    if age < 18:
        print('You aren\'t old enough to vote.')
    else:
        print('Welcome to our voting program.')
    if age >= 18:
        print('Welcome to our voting program.')
    else:
        print('You aren\'t old enough to vote.')

def main():
    doAction()

if __name__ == "__main__":
    main()
