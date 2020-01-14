# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

def doAction():
    class OopsException(Exception):
        pass
    try:
        raise OopsException()
    except OopsException as e:
        print("Caught an oops")

def main():
    doAction()

if __name__ == "__main__":
    main()
