def solve():
    #function
    n = int(input())
    m = 0
    c=0
    for i in range(n):
        a = list(map(int,input().split()))
        if(a[0]<=10):
            if(m<=a[1]):
                m = a[1]
                c = i
        else:
            continue
    print(c+1)        
        


for _ in range(int(input())):
    solve()