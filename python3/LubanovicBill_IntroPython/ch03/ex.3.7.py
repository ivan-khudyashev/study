# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    things = ["mozzarella", "cinderella", "salmonella"]
    print("Delete disease (Get Nobel Prize :) ): ", things[2])
    del things[2]
    print("things:  ", things)

def main():
    doAction()

if __name__ == "__main__":
    main()
