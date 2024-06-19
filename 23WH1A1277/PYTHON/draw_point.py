import tkinter as tk

def draw_point(canvas, point, color="black"):
    x, y = point
    radius = 23  # Radius of the point (circle)
    canvas.create_oval(x - radius, y - radius, x + radius, y + radius, outline=color, fill=color)

def main():
    root = tk.Tk()
    root.title("Point Drawer")

    canvas = tk.Canvas(root, width=400, height=400)
    canvas.pack()

    point = (100, 100)
    color = "red"
    draw_point(canvas, point, color)

    root.mainloop()

if __name__ == "__main__":
    main()
