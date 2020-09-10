import math
n, d = input().split()
n = int(n)
d = int(d)

if n+d > 10000:
    print(1)
elif isinstance((10000-n)/d, float):
    print(math.ceil((10000-n)/d))
else:
    print((10000-n)//d)