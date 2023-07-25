t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    b=[]
    c=[]
    for i in a:
        if(i%2==0):
            b.append(i)
        else:
            c.append(i)
    if(sum(b) > sum(c)):
        print("YES")
    else:
        print("NO")                