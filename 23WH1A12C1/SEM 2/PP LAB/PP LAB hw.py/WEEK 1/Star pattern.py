#curved umbrella pattern
import math

def print_curved_umbrella(radius):
    for y in range(radius, -1, -1):
        line = ""
        for x in range(2 * radius + 1):
            distance_to_center = abs(x - radius)
            distance_to_curve = abs(y - radius)
            if distance_to_center <= distance_to_curve:
                line += "*"
            else:
                line += " "
        print(line)

# Example usage with radius 5
umbrella_radius = 5
print_curved_umbrella(umbrella_radius)