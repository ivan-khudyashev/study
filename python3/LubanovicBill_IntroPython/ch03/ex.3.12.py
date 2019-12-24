# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    e2f = {"dog": "chien", "cat": "chat", "walrus": "morse"}
    f2e = dict()
    for key, val in e2f.items():
        f2e[val] = key
    print("French to English dict:\n\t" + str(f2e))

def main():
    doAction()

if __name__ == "__main__":
    main()
