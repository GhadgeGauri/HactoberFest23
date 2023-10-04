import random

# Generate a random float between 0 and 1
random_float = random.random()

# Scale the random float to the range [0, 9]
random_number = int(random_float * 10)

print("Random number between 0 and 9:", random_number)
