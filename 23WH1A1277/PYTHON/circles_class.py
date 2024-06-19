import tkinter as tk

class Circle:
    def __init__(self, x, y, radius, color="black"):
        self.x = x
        self.y = y
        self.radius = radius
        self.color = color

def draw_circles(canvas, circles):
    for circle in circles:
        x, y, r = circle.x, circle.y, circle.radius
        canvas.create_oval(x - r, y - r, x + r, y + r, outline=circle.color, fill=circle.color)

def main():
    root = tk.Tk()
    root.title("Circle Drawer")

    canvas = tk.Canvas(root, width=400, height=400)
    canvas.pack()

    # Instantiate Circle objects
    circles = [
        Circle(100, 100, 80, "red"),
        Circle(200, 200, 75, "blue"),
        Circle(300, 100, 30, "green")
    ]

    # Draw the circles on the canvas
    draw_circles(canvas, circles)

    root.mainloop()

if __name__ == "__main__":
    main()
