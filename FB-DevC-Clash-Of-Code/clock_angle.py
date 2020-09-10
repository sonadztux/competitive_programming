h, m = input().split(':')
h = int(h)
m = int(m)

if (h == 12): 
    h = 0
if (m == 60): 
    m = 0
    
sudut_h = 0.5 * (h * 60 + m) 
sudut_m = 6 * m 
sudut = abs(sudut_h - sudut_m)
sudut = min(360 - sudut, sudut) 
print(abs(sudut))