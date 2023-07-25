t = int(input())
for i in range(t):
    a = list(map(int,input().split()))
    s = input()
    b = sorted(set(s.lower()))
    c=[]
    d=[]
    f=[]
    for i in b:
        c.append(s.count(i))
        
    for i in b:
        d.append(s.lower().count(i))
    for i in range(len(c)):
        f.append(d[i] - c[i])
    v=0
    print(c,f)
    for i in range(len(c)):
        if(f[i]//2>0):
            v+=1
    h=[]
    k=[]        
    if(v<a[1]):
        for i in range(len(d)):
            h.append((d[i]//2)) 
        print(sum(h))    
    elif(v==a[1]):
        for i in range(len(d)):
            h.append((d[i]//2)) 
        print(sum(h)-v)
    else:     
        for i in range(len(d)):
            k.append((d[i]//2))
        print(sum(k)-(a[1]-v))             
     