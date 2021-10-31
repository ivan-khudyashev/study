# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com

from conversion import convert_usd_to_aud


def convert_and_sum_list(usd_list, **kwargs):
    total = 0
    for amount in usd_list:
        total += convert_usd_to_aud(amount, **kwargs)
    return total


def doAction():
    print(convert_and_sum_list([1, 3], rate=0.8))


def main():
    doAction()


if __name__ == "__main__":
    main()
