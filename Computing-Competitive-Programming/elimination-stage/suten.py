a = input()
b = input()
eko = 0
ganesh = 0

a2 = list(a.replace(" ",""))
b2 = list(b.replace(" ",""))

for n in range(len(a2)):
    if a2[n]=="h" and b2[n]=="e":
        ganesh +=1
    elif a2[n]=="e" and b2[n]=="h":
        eko+=1
    elif a2[n]=="h" and b2[n]=="a":
        eko+=1
    elif a2[n]=="a" and b2[n]=="h":
        ganesh+=1
    elif a2[n]=="e" and b2[n]=="a":
        ganesh+=1
    elif a2[n]=="a" and b2[n]=="e":
        eko+=1

if eko == ganesh:
    print("Draw")
elif eko > ganesh:
    print("Eko wins")
else:
    print("Ganesh wins")