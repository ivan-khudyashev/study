# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    over_18 = True
    over_21 = False
    print("Source values: ", "over_18 = ", over_18, ", over_21 = ", over_21)
    print("over_18 and over_21 = ", over_18 and over_21)
    print("over_18 or over_21 = ", over_18 or over_21)
    print("not over_18 = ", not over_18)
    print("not over_21 or (over_21 or over_18) = ", not over_21 or (over_21 or over_18))

def main():
    doAction()

if __name__ == "__main__":
    main()
