from typing import Match


A = float(input('Enter the first side: '))
B = float(input('Enter the second side: '))
a = float(input('Enter the angle between the sides: '))

import math

print(math.sin(math.radians(a)))

S = 0.5 * A * B * math.sin(math.radians(a))

print(S)