# Copyright (C) 2019-2021, Khudyashev Ivan, bahek1983@gmail.com
import tkinter as tk
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import matplotlib.pyplot as plt
import matplotlib
import seaborn as sns
import numpy as np

# This defines the Python GUI backend to use for matplotlib
matplotlib.use('TkAgg')
# Initialize an instnce of Tk
root = tk.Tk()
#initialize matplotlib figure for graphing purposes
fig = plt.figure(1)
# Special type of "canvas" to allow for matplotlib graphing
canvas = FigureCanvasTkAgg(fig, master=root)


def doAction():
    temperature = [ 14.2, 16.4, 11.9, 12.5, 18.9, 22.1, 19.4, 23.1, 25.4, 18.1, 22.6, 17.2 ]
    sales = [ 215.20, 325.00, 185.20, 330.20, 418.60, 520.25, 412.20, 614.60, 544.80, 421.40, \
        445.50, 408.10]
    plt.scatter(temperature, sales, color='red')
    fig.canvas.draw()


def main():
    doAction()


if __name__ == "__main__":
    main()
