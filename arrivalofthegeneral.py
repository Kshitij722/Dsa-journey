n = int(input())
h = list(map(int,input().split()))

mx = max(h)
mn = min(h)
# index_max = len(h) - h[::-1].index(mx) - 1
# index_min =len(h) - h[::-1].index(mn) - 1

index_max= [i for i in range(len(h)) if h[i] == mx]

index_min= [i for i in range(len(h)) if h[i] == mn]

if(0 in index_max):
    if(n-1 in index_min):
        print(0)
    else:
        p1 = (n-1) - max(index_min) 
        print(p1)
else:
    if(n-1 in index_min):
        print(min(index_max))
    else:    
        p1 = (n-1) - max(index_min)
        p2 = min(index_max)
        if(min(index_max) <max(index_min)):
            print(p1+p2)
        else:
            print(p1+p2-1)   