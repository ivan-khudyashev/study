# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    seconds_per_hour = 60 * 60;
    seconds_per_day = 24 * seconds_per_hour
    print("Floating point division s_per_day/s_per_hour: " + str(seconds_per_day / seconds_per_hour))

def main():
    doAction()

if __name__ == "__main__":
    main()
