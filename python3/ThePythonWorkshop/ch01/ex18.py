# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    print('Enter a number to see if it\'s a perfect square.')
    number = input()
    number = abs(int(number))
    i = -1
    sqrtNumber = number ** (0.5)
    isSquare = False
    while i <= sqrtNumber:
        i += 1
        if i * i == number:
            isSquare = True
            break
    if isSquare:
        print('The square root of', number, 'is', i, '.')
    else:
        print('', number, 'is not a perfect square.')

def main():
    doAction()

if __name__ == "__main__":
    main()
