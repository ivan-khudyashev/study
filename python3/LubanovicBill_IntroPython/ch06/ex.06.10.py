# Copyright (C) 2019, Khudyashev Ivan, bahek1983@gmail.com

class Laser():
    def does(self):
        return 'disintegrate'

class Claw():
    def does(self):
        return 'crush'

class SmartPhone():
    def does(self):
        return 'ring'

class Robot():
    def __init__(self, laser, claw, smartphone):
        self.__laser = laser
        self.__claw = claw
        self.__smartphone = smartphone
    def does(self):
        print("laser: ", self.laser.does())
        print("claw: ", self.claw.does())
        print("smartphone: ", self.smartphone.does())
    @property
    def laser(self):
        return self.__laser
    @property
    def claw(self):
        return self.__claw
    @property
    def smartphone(self):
        return self.__smartphone

def doAction():
    r = Robot(Laser(), Claw(), SmartPhone())
    r.does()

def main():
    doAction()

if __name__ == "__main__":
    main()
