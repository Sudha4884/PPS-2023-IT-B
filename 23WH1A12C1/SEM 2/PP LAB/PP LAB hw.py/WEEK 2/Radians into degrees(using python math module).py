#Python function that converts radians to degrees using the value of Pi from the math module:
import math

def radians_to_degrees(radians):
    degrees = radians * (180 / math.pi)
    return degrees

# Example usage:
angle_in_radians = 1.5  # Replace this with your desired angle in radians
angle_in_degrees = radians_to_degrees(angle_in_radians)
print(f"{angle_in_radians} radians is equal to {angle_in_degrees} degrees.")
