s=input()
s=s.upper()
s=s.replace(' ','')
s=s.replace('J','')
su=''
a = ('A','B','C','D','E','F','G','H','I','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z')

for c in s:
    if c not in su:
        su+=c

for c in a:
    if c not in su:
        su+=c
i=1     
for c in su:
    if i%5==0:
        print(c)
    else:
        print(c, end=' ')
    i+=1