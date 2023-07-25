t = int(input())
a=[]
for i in range(t):
    s = input()
    a.append(s)
b = list(set(a))
if(len(b)==1):
    print(b[0])
else:
  
    c = a.count(b[0])
    d = a.count(b[1])
    if(d>c):
        print(b[1])
    else:
        print(b[0])  
    