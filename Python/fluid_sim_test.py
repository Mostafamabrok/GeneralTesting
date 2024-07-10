#The goal of this file is to just do a proof of concept on the idea of a small-scale fluid simulation app in Python.

#First, we are going just be writing and testing a "Screen".

class dust:
    def __init__(self, x, y, pid):
        self.x = x
        self.y = y
        self.pid = pid
        self.array_pos = (10*self.y-10) + self.x

    def refresh():
        if self.array_pos+10
        


def draw(draw_ok):
    global array
    global drawn_array


    array = ['-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            '-', '-', '-',  '-', '-', '-', '-', '-', '-', '-', '\n',
            'x', 'x', 'x',  'x', 'x', 'x', 'x', 'x', 'x', 'x', '\n',]

    while draw_ok:
        drawn_array = ""
        for pixel in array:
            drawn_array = drawn_array + pixel
    
        print(drawn_array)



draw(True)