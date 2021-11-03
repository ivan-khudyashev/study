# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
from datetime import datetime
import time

def doAction():
    f = open('log.txt', 'w')
    for i in range(0, 10):
        print(datetime.now().strftime('%Y%m%d_%H:%M:%S - '), i)
        f.write(datetime.now().strftime('%Y%m%d_%H:%M:%S - '))
        time.sleep(1)
        f.write(str(i))
        f.write('\n')
    f.close()


def main():
    doAction()


if __name__ == "__main__":
    main()
