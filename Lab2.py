x = float(input('Enter x: '))
import math
if x<=0:
    print('Y = 1')
elif x>0 and x<=math.pi:
    print('Y = ', end=" 5")
    print("%.3f" % math.cos(x))
else:
    print('Y = -1')