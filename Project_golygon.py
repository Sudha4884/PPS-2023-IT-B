import tkinter as tk
from tkinter import Canvas
from PIL import Image, ImageTk
import pygame

class GolygonSolverGUI:
    def __init__(self, root):
        self.root = root
        self.root.geometry("2000x800")
        self.root.configure(bg="#b3e0ff")

        background_image = Image.open("bg1.png")
        self.background_photo = ImageTk.PhotoImage(background_image)

        self.background_label = tk.Label(self.root, image=self.background_photo)
        self.background_label.place(x=0, y=0, relwidth=1, relheight=1)

        start_button = tk.Button(self.root, text="Start", command=self.start_game, bg="#33cc33", font=("Arial", 20))
        start_button.place(relx=0.8, rely=0.8, anchor="center")

        pygame.mixer.init()
        self.music_file = "Background_music.mp3"

    def start_game(self):
        pygame.mixer.music.load(self.music_file)
        pygame.mixer.music.play(-1)

        self.root.destroy()

        game_window = tk.Tk()
        game_window.title("GOLYGON SOLVER")
        game_window.geometry("2000x800")
        game_window.configure(bg="#b3e0ff")

        city1_frame = tk.Frame(game_window, bg="#b3e0ff")
        city1_frame.grid(row=0, column=0, padx=20, pady=20, sticky="n")

        city1_label = tk.Label(city1_frame, text="City 1", font=("Arial", 16), bg="#b3e0ff")
        city1_label.grid(row=0, column=0, columnspan=2)

        # Add city 1 image and inputs
        city1_image = ImageTk.PhotoImage(Image.open("city_1.png").resize((350, 350)))
        city1_image_label = tk.Label(city1_frame, image=city1_image, bg="lightblue", width=350, height=350)
        city1_image_label.image = city1_image
        city1_image_label.grid(row=1, column=0, columnspan=2, pady=10)

        city1_length_label = tk.Label(city1_frame, text="Length of the longest edge", font=("Arial", 14), bg="#b3e0ff")
        city1_length_label.grid(row=2, column=0, pady=5)
        city1_length_entry = tk.Entry(city1_frame, width=40, font=("Arial", 8))
        city1_length_entry.grid(row=2, column=1, pady=3)

        city1_blocks_label = tk.Label(city1_frame, text="Number of blocked intersections", font=("Arial", 14), bg="#b3e0ff")
        city1_blocks_label.grid(row=3, column=0, pady=5)
        city1_blocks_entry = tk.Entry(city1_frame, width=40, font=("Arial", 8))
        city1_blocks_entry.grid(row=3, column=1, pady=5)

        city1_coordinates_label = tk.Label(city1_frame, text="Coordinates of blocked intersections (x1,y1)", font=("Arial", 14), bg="#b3e0ff")
        city1_coordinates_label.grid(row=4, column=0, pady=5)
        city1_coordinates_entry = tk.Entry(city1_frame, width=40, font=("Arial", 8))
        city1_coordinates_entry.grid(row=4, column=1, pady=5)

        city1_coordinates_label_2 = tk.Label(city1_frame, text="Coordinates of blocked intersections (x2,y2)", font=("Arial", 14), bg="#b3e0ff")
        city1_coordinates_label_2.grid(row=5, column=0, pady=5)
        city1_coordinates_entry_2 = tk.Entry(city1_frame, width=40, font=("Arial", 8))
        city1_coordinates_entry_2.grid(row=5, column=1, pady=5)

        # Store entries for later access
        self.city1_length_entry = city1_length_entry
        self.city1_blocks_entry = city1_blocks_entry
        self.city1_coordinates_entry = city1_coordinates_entry
        self.city1_coordinates_entry_2 = city1_coordinates_entry_2


        city2_frame = tk.Frame(game_window, bg="#b3e0ff")
        city2_frame.grid(row=0, column=1, padx=20, pady=20, sticky="n")

        city2_label = tk.Label(city2_frame, text="City 2", font=("Arial", 16), bg="#b3e0ff")
        city2_label.grid(row=0, column=0, columnspan=2)

        # Add city 2 image and inputs
        city2_image = ImageTk.PhotoImage(Image.open("city_2.png").resize((350, 350)))
        city2_image_label = tk.Label(city2_frame, image=city2_image, bg="lightblue", width=350, height=350)
        city2_image_label.image = city2_image
        city2_image_label.grid(row=1, column=0, columnspan=2, pady=10)

        city2_length_label = tk.Label(city2_frame, text="Length of the longest edge", font=("Arial", 14), bg="#b3e0ff")
        city2_length_label.grid(row=2, column=0, pady=5)
        city2_length_entry = tk.Entry(city2_frame, width=40, font=("Arial", 8))
        city2_length_entry.grid(row=2, column=1, pady=5)

        city2_blocks_label = tk.Label(city2_frame, text="Number of blocked intersections", font=("Arial", 14), bg="#b3e0ff")
        city2_blocks_label.grid(row=3, column=0, pady=5)
        city2_blocks_entry = tk.Entry(city2_frame, width=40, font=("Arial", 8))
        city2_blocks_entry.grid(row=3, column=1, pady=5)

        city2_coordinates_label = tk.Label(city2_frame, text="Coordinates of blocked intersections (x1,y1)", font=("Arial", 14), bg="#b3e0ff")
        city2_coordinates_label.grid(row=4, column=0, pady=5)
        city2_coordinates_entry = tk.Entry(city2_frame, width=40, font=("Arial", 8))
        city2_coordinates_entry.grid(row=4, column=1, pady=5)

        city2_coordinates_label_2 = tk.Label(city2_frame, text="Coordinates of blocked intersections (x2,y2)", font=("Arial", 14), bg="#b3e0ff")
        city2_coordinates_label_2.grid(row=5, column=0, pady=5)
        city2_coordinates_entry_2 = tk.Entry(city2_frame, width=40, font=("Arial", 8))
        city2_coordinates_entry_2.grid(row=5, column=1, pady=5)

        # Store entries for later access
        self.city2_length_entry = city2_length_entry
        self.city2_blocks_entry = city2_blocks_entry
        
        self.city2_coordinates_entry = city2_coordinates_entry
        self.city2_coordinates_entry_2 = city2_coordinates_entry_2

        solve_button = tk.Button(game_window, text="Solve Golygons", command=self.solve_golygons, bg="#33cc33", font=("Arial", 14))
        solve_button.grid(row=1, column=0, columnspan=2, pady=20)

        game_window.mainloop()

    def solve_golygons(self):
        output = ""
        num_cities = 2
        golygons_list = []

        for city_num in range(1, num_cities + 1):
            n = int(getattr(self, f"city{city_num}_length_entry").get())
            k = int(getattr(self, f"city{city_num}_blocks_entry").get())
            coordinates_1 = getattr(self, f"city{city_num}_coordinates_entry").get()
            coordinates_2 = getattr(self, f"city{city_num}_coordinates_entry_2").get()
            coordinates_list = [tuple(map(int, coordinates_1.split(','))), tuple(map(int, coordinates_2.split(',')))]

            ans, golygons = self.dfs(105, 250, n, k, coordinates_list)

            golygons_list.append(golygons)

            output += f"City {city_num}:\nNumber of golygons: {len(golygons)}\n{ans}\n\n"

        output_window = tk.Toplevel()
        output_window.title("Output")
        output_window.configure(bg="#b3e0ff")#0000FF
        output_window.geometry("2000x800")

        canvas = Canvas(output_window, width=1000, height=500, bg="#FFA500")      
        canvas.pack()

        # Load background image
        background_image = Image.open("bg_2.png")
        background_photo = ImageTk.PhotoImage(background_image)
        canvas.create_image(0, 0, anchor=tk.NW, image=background_photo)

        for idx, golygons in enumerate(golygons_list):
            x_offset = idx * 500
            for g in golygons:
                self.draw_golygon(canvas, g, x_offset)

        output_text = tk.Text(output_window, height=25, width=150, bg="pink", relief="ridge", bd=4)
        output_text.insert(tk.END, output)
        output_text.config(state="disabled")
        output_text.pack()

    def draw_golygon(self, canvas, golygon, x_offset):
        
    # Calculate the middle of the canvas
        middle_x = canvas.winfo_reqwidth() / 2
        middle_y = canvas.winfo_reqheight() / 2

        # Calculate the starting position based on the middle of the canvas
        start_x = middle_x - (len(golygon) * 10) / 2
        start_y = middle_y - 10 / 2

        # Dictionary to map directions to movements
        direction_movements = {'e': (100, 0), 'n': (0, -100), 's': (0, 100), 'w': (-100, 0)}

        # Iterate over each direction in the golygon
        for direction in golygon:
            # Get movement for the current direction
            dx, dy = direction_movements[direction]

            # Calculate end position
            end_x = start_x + dx
            end_y = start_y + dy

            # Draw line on the canvas
            canvas.create_line(start_x, start_y, end_x, end_y, fill="blue", width=2)

            # Update start position
            start_x, start_y = end_x, end_y

            # Update x_offset for the next golygon
            x_offset += 1000  # Adjust according to your layout

        pass

    def dfs(self, o, Max, n, k, coordinates_list):
        ans = 0
        gra = [[0]*Max for _ in range(Max)]
        dx = [1, 0, 0, -1]
        dy = [0, 1, -1, 0]
        vis = [[False]*Max for _ in range(Max)]
        Direction = ['e', 'n', 's', 'w']
        sta = [0]*30
        num = [0, 3]
        golygons = []

        for x, y in coordinates_list:
            if abs(x) > o or abs(y) > o:
                continue
            gra[o + x][o + y] = 1

        def dfs_util(x, y, pos, dir):
            nonlocal ans

            if pos == n + 1:
                if x == o and y == o:
                    ans += 1
                    golygons.append(''.join(Direction[sta[i]] for i in range(1, n + 1)))
                return

            step = sum(range(pos, n + 1))
            if abs(x - o) + abs(y - o) > step:
                return

            if dir == -1:
                for i in range(4):
                    xx = x + pos * dx[i]
                    yy = y + pos * dy[i]
                    if vis[xx][yy]:
                        continue
                    if 1 <= i < 3:
                        blocked = False
                        for j in range(1, pos):
                            if gra[x + j * dx[i]][y + j * dy[i]]:
                                blocked = True
                                break
                        if not blocked:
                            sta[pos] = i
                            vis[xx][yy] = True
                            dfs_util(xx, yy, pos + 1, 1)
                            vis[xx][yy] = False
                    else:
                        blocked = False
                        for j in range(1, pos):
                            if gra[x + dx[i]][y + j * dy[i]]:
                                blocked = True
                                break
                        if not blocked:
                            sta[pos] = i
                            vis[xx][yy] = True
                            dfs_util(xx, yy, pos + 1, 0)
                            vis[xx][yy] = False

            else:
                if dir == 0:
                    for i in range(1, 3):
                        xx = x + pos * dx[i]
                        yy = y + pos * dy[i]
                        if vis[xx][yy]:
                            continue
                        blocked = False
                        for j in range(1, pos):
                            if gra[x + j * dx[i]][y + j * dy[i]]:
                                blocked = True
                                break
                        if not blocked:
                            sta[pos] = i
                            vis[xx][yy] = True
                            dfs_util(xx, yy, pos + 1, 1)
                            vis[xx][yy] = False
                elif dir == 1:
                    for j in range(2):
                        i = num[j]
                        xx = x + pos * dx[i]
                        yy = y + pos * dy[i]
                        if vis[xx][yy]:
                            continue
                        blocked = False
                        for j in range(1, pos):
                            if gra[x + j * dx[i]][y + j * dy[i]]:
                                blocked = True
                                break
                        if not blocked:
                            sta[pos] = i
                            vis[xx][yy] = True
                            dfs_util(xx, yy, pos + 1, 0)
                            vis[xx][yy] = False

        dfs_util(o, o, 1, -1)
        return "\n".join(golygons), golygons


if __name__ == "__main__":
    root = tk.Tk()
    gui = GolygonSolverGUI(root)
    root.mainloop()
