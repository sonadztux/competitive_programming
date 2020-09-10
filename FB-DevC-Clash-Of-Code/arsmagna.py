n, m = input().split()
s = [''.join(sorted(input())) for _ in range(int(n))]
t = [''.join(sorted(input())) for _ in range(int(m))]

u = set(s).intersection(set(t))
res = 0
for i in u:
    res += s.count(i)*t.count(i)
    
print(res)