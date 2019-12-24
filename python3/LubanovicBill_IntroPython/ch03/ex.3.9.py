# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    surprise = ["Groucho", "Chico", "Harpo"]
    surprise[-1] = surprise[-1].lower()[::-1].capitalize()
    print("surprise:  ", surprise)

def main():
    doAction()

if __name__ == "__main__":
    main()
