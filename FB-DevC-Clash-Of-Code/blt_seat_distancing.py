x,p,l = input().split()
x = int(x)
p = int(p)
l = int(l)

for c in range(p):
    if c % 2 != 0:
        for b in range(x): 
            for a in range(l):
                if a % 2 == 0:
                    print(' '*x, end='')
                else:
                    print('*'*x, end='')
            print()     
    else:
        for b in range(x): 
            for a in range(l):
                if a % 2 == 0:
                    print('*'*x, end='')
                else:
                    print(' '*x, end='')
            print()