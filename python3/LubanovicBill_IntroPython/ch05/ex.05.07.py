# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    from collections import defaultdict
    dict_of_lists = defaultdict(list)
    #dict_of_lists = dict()
    print("dict_of_lists['a'] before appending:")
    print(dict_of_lists['a'])
    dict_of_lists['a'].append('something for a')
    print("dict_of_lists['a'] after appending:")
    print(dict_of_lists['a'])

def main():
    doAction()

if __name__ == "__main__":
    main()
