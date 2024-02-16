#using Formula
# Import NumPy Library
import numpy as np

# initializing points in numpy arrays

P1 = np.array((9, 16, 25))
P2 = np.array((1, 4, 9))

# subtracting both the vectors

temp = P1 - P2

# Using Formula

euclid_dist = np.sqrt(np.dot(temp.T, temp))

# printing Euclidean distance
print(euclid_dist)