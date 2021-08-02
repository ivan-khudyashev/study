# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction3():
    greeting = 'Hello'
    print(greeting * 5)

def doAction2():
    spanish_greeting = 'Hola '
    print(spanish_greeting + 'Senor.')

def doAction1():
    spanish_greeting = 'Hola'
    print(spanish_greeting + 'Senor.')


def main():
    doAction1()
    doAction2()
    doAction3()

if __name__ == "__main__":
    main()
