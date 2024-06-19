import tkinter as tk

def draw_rectangle(canvas, rectangle, color):
    x1, y1, x2, y2 = rectangle
    canvas.create_rectangle(x1, y1, x2, y2, outline="black", fill=color)

def main():
    root = tk.Tk()
    root.title("Rectangle Drawer")

    canvas = tk.Canvas(root, width=400, height=400)
    canvas.pack()

    rectangle = (50, 50, 200, 150)
    color = "Red"
    draw_rectangle(canvas, rectangle, color)

    root.mainloop()

if __name__ == "__main__":
    main()
