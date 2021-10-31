# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def add_suffix(suffix='.com'):
    return 'google' + suffix


def doAction():
    print(add_suffix())
    print(add_suffix('.co.uk'))


def main():
    doAction()


if __name__ == "__main__":
    main()
