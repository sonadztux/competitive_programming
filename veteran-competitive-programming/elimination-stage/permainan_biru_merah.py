def solve(m, n): 
    if(m == n): 
        return 0
    elif(m > n): 
        return m - n 
    elif(n % 2 == 1): 
        return 1 + solve(m, n + 1) 
    else: 
        return 1 + solve(m, n // 2) 
    
m,n = input().split()
m,n = int(m), int(n)
print(solve(m,n))