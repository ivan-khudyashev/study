# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

def avg(marks):
    assert type(marks) == list, 'Wrong type of "marks" - must be list'
    assert len(marks) != 0, 'List must not be empty'
    return round( sum(marks) / len(marks), 2)


def doAction():
    sem1_marks = [62, 65, 75]
    print('Average marks for semester 1: {}'.format(avg(sem1_marks)))
    ranks = []
    print('Average marks for semester 1: {}'.format(avg(ranks)))


def main():
    doAction()


if __name__ == "__main__":
    main()
