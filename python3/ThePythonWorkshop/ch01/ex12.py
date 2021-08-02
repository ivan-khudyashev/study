# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    # Choose a question to ask
    print('What is yout name?')
    name = input()
    print('Hello, ' + name + '.')

def main():
    doAction()

if __name__ == "__main__":
    main()
