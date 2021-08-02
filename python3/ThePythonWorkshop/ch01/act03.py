# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def askUserDayRate():
    rate = -1
    while rate < 1 or rate > 10:
        print("Please, input rate of your current date (in scale: 1 <= x <= 10):")
        rate = int(input())
    return rate

def doAction():
    rate = askUserDayRate()
    if rate >=9:
        print("Cool! That was a great day!")
    elif rate >= 7:
        print("Well, that was a good day")
    elif rate >=5:
        print("Hmm, that was not so bad day")
    elif rate >=3:
        print("Oh, that was a difficult day. It's good that it's end")
    else:
        print("Uuuu, it's a terrible day. How good, that it's finally ending")

def main():
    doAction()

if __name__ == "__main__":
    main()
