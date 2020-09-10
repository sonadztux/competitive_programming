a,b,c,d = [int(i) for i in input().split()]
p,q,r,s = [int(i) for i in input().split()]

kel1 = 2*(abs(a-c)+abs(b-d));
kel2 = 2*(abs(p-r)+abs(q-s));

v = [i for i in range(a,c+1)]
w = [i for i in range(b,d+1)]
x = [i for i in range(p,r+1)]
y = [i for i in range(q,s+1)]

intersec_x = list(set(v).intersection(x))
intersec_y = list(set(w).intersection(y))

kelover = 2*(len(intersec_x)-1+len(intersec_y)-1)
print(kel1+kel2-kelover)