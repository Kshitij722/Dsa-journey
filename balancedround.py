def solve():
    #function
    n = list(map(int,input().split()))
    a = list(map(int,input().split()))
    a.sort()
    c = 1
    ans = 0
    for i in range(len(a)-1):
        if(abs(a[i]-a[i+1]) <= n[1]):
            c+=1
        else:
            ans = max(ans,c)
            c = 1
    ans = max(ans,c)
    print(n[0] - ans)            
     
for _ in range(int(input())):
    solve()