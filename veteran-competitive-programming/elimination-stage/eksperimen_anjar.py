n = int(input())

def btd(b): 
    return int(b,2) 

def solve(s):
    while('01' in s or '10' in s):
        s=s.replace('01', '')
        s=s.replace('10','')
    if len(s)==0:
        return '0'
    if '1' not in s:
        return len(s)
    return s
            

def dtb(n):  
    return bin(n).replace('0b', '')

res = solve(dtb(n))
if res != '0' and type(res) != int:
    print(btd(res))
else:
    print(res)