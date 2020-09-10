n,k = input().split()
d = [int(i) for i in input().split()]
x = [int(i) for i in input().split()]

tahu = ['t' for _ in range(int(n))]

def check(a):
    a -= 1
    while a != -1:
        if tahu[a]=='t':
            tahu[a]='y'
            a = d[a]-1
        else:
            break

for i in reversed(x):
    check(i)
print(tahu.count('y'))