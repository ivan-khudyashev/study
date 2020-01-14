# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Bear():
    def eats(self):
        return 'berries'

class Rabbit():
    def eats(self):
        return 'clover'

class Octothorpe():
    def eats(self):
        return 'campers'

def doAction():
    l = [Bear(), Rabbit(), Octothorpe()]
    for i in l:
        print(type(i), i.eats())

def main():
    doAction()

if __name__ == "__main__":
    main()
