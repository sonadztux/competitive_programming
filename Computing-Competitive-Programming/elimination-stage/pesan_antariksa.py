def DecimalToBinary(num):
    if num >= 1:
        DecimalToBinary(num//2)
        print(num%2, end="")

n = int(input())
a=0
b=2

if 1 <= n <= 1000000:
    if n > 1:
        for i in range(n-1):
            a+=b
            b+=2
        DecimalToBinary(a)
    else:
        print(0)