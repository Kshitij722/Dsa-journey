t=int(input())
for i in range(t):
    a=list(map(int,input().split()))
    p=[]
    q=[]
    r=[]
    h=[]
    for i in range(len(a)//2):
        p.append(a[i])
    for i in range(len(a)//2,len(a)):
        q.append(a[i])
    for i in range(min(p),max(p)+1):
        r.append(i)
    for i in range(min(q),max(q)+1):
        h.append(i)

    total = r+h
    count = list(set(total))
    print(len(count))                