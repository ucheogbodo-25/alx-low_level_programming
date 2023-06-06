import random

# Assign a random signed number to the variable number
number = random.randint(-10, 10)

# Print the number and its sign
print(number)

if number > 0:
    print("is positive")
elif number == 0:
    print("is zero")
else:
    print("is negative")
