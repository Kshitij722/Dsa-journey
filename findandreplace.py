t = int(input())
for i in range(t):
    n = int(input())
    s = input()
    a=[]
    b=[]
    for i in range(n):
        if(i%2==0):
            a.append(s[i])
        else:
            b.append(s[i])
    c = set(a)
    d = set(b)
    if(len(c.intersection(d))==0):
        print("YES")
    else:
        print("NO")                