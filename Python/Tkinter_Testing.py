import tkinter as tk

window=tk.Tk()

def yourcommand():
    print(entry.get())

label = tk.Label(text="Name?");label.pack()
entry = tk.Entry(width=50);entry.pack()
yourbutton=tk.Button(window, text="Print Name?", command=yourcommand); yourbutton.pack()


window.mainloop()