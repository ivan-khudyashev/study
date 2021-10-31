# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def convert_usd_to_aud(amount, rate=0.75):
    return amount /rate


def doAction():
    print(convert_usd_to_aud(100))
    print(convert_usd_to_aud(100, rate=0.78))


def main():
    doAction()


if __name__ == "__main__":
    main()
