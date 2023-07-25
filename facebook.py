t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    d=[]
    m=max(a)
    m1=a.index(m)
    for i in range(n):
        if(a[i]==m):
            if(b[i]>b[m1]):
                m1=i
    print(m1+1)    
    
   
            