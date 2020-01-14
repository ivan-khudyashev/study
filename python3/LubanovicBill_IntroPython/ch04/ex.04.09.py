# Copyright (C) 2019-2020, Khudyashev Ivan, bahek1983@gmail.com

def get_odds():
    for i in range(10):
        if i % 2:
            yield i

def doAction():
    idx = 1
    stopIdx = 3
    for i in get_odds():
        if idx == stopIdx:
            print("Found value = " + str(i) + \
                " on stop_index = " + str(stopIdx))
            break
        idx += 1

def main():
    doAction()

if __name__ == "__main__":
    main()
