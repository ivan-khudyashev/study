# Copyright (C) 2019-2020, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    guess_me = 7
    if guess_me < 7:
        print("too low")
    elif guess_me > 7:
        print("too high")
    else:
        print("just right")

def main():
    doAction()

if __name__ == "__main__":
    main()
