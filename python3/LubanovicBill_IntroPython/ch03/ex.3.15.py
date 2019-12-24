# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    life = {
        "animals": {
            "cats": ["Henri", "Grumpy", "Lucy"],
            "octopi": {},
            "emus": {}
        },
        "plants": dict(),
        "other": dict()
    }
    print("Multilevel dict life: ", life)

def main():
    doAction()

if __name__ == "__main__":
    main()
