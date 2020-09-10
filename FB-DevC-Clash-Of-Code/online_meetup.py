n = int(input())
d = [int(i) for i in input().split()]

res = []
tmp = 0
for i in d:
    tmp += i
    res.append(tmp)
res.sort()
print(res[-1])