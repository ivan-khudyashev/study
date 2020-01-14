# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    from pprint import pprint
    titles = ['Creature of Habit', 'Crewel Fate']
    plots = ['A nun turns into a monster', 'A haunted yarn shop']
    d = {k: v for k, v in zip(titles, plots)}
    print("Created dictionary from zip:")
    pprint(d)

def main():
    doAction()

if __name__ == "__main__":
    main()
