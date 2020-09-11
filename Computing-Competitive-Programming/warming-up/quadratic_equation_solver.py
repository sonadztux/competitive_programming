from math import sqrt
a,b,c = input().split()
a,b,c = int(a), int(b), int(c)
d = b*b-4*a*c

if d > 0:
    x1 = (-b+sqrt(d))/(2*a)
    x2 = (-b-sqrt(d))/(2*a)
    print('%.16f'%x2,  '%.16f'%x1)
elif d==0:
    x1 = (-b+sqrt(d))/(2*a)
    print('%.16f'%x1,  'double root')
else:
    print('no real roots')
