# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    e2f = {"dog": "chien", "cat": "chat", "walrus": "morse"}
    f2e = dict()
    for key, val in e2f.items():
        f2e[val] = key
    print("French chien on English: ", f2e["chien"])

def main():
    doAction()

if __name__ == "__main__":
    main()
