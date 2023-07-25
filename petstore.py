# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=set(a)
    c=0
    d=0
    if(len(a)%2!=0):
        print("NO")
    else:    
        for i in b:
            c+=a.count(i)
            if(c%2!=0):
                d+=1
            c=0
        if(d==0):
            print("YES")
        else:
            print("NO")