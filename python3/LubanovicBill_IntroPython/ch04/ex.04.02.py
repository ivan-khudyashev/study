# Copyright (C) 2019-2020, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    guess_me = 7
    start = 1
    borderLimit = 9
    while start < borderLimit:
        if start == guess_me:
            print("found it!")
            #break
        if start < guess_me:
            print("too low")
        elif start > guess_me:
            print("too high")
        start += 1

def main():
    doAction()

if __name__ == "__main__":
    main()
