t = int(input())
for i in range(t):
    n,q = map(int,input().split())
    a = list(map(int,input().split()))
    for i in range(q):
        l,r,k = map(int,input().split())
        b=[]
        if(l-1 == 0):
            b=a[(l-1):r]
            c = a[r:]
            d =len(b) * k
            if((d+sum(c))%2!=0):
                print("YES")
            else:
                print("NO")
        else:
            b1 = a[(l-1):r]            
            c1 = a[:(l-1)]
            c2 = a[r:]
            d = len(b1)*k
            if((sum(c1)+sum(c2)+d)%2!=0):
                print("YES")
            else:
                print("NO")     
                 
        