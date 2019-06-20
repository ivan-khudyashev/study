#!/usr/local/python
# -*- coding: utf-8 -*-
# Copyright (C) 2018, Khudyashev Ivan, bahek1983@gmail.com
class Laser():
    def does(self):
        print('disintegrate')
        
class Claw():
    def does(self):
        print('crush')
        
class SmartPhone():
    def does(self):
        print('ring')
        
class Robot():
    def __init__(self, laser, claw, smartphone):
        self.laser = laser
        self.claw = claw
        self.smartphone = smartphone
        
    def does(self):
        def makeAction(initStr, doesAction, endStr):
            print(initStr)
            doesAction()
            print(endStr)
        makeAction('Robot\s laser: ', self.laser.does, '-------')
        makeAction('Robot\s claw: ', self.claw.does, '-------')
        makeAction('Robot\s smartphone: ', self.smartphone.does, '-------')

r = Robot(Laser(), Claw(), SmartPhone())
r.does()
        