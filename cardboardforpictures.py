def solve():
    #function
    n , c = map(int,input().split())
    a = list(map(int,input().split()))
    i = 0
    j = 10**9
    ans = 0
    while i<=j:
        ans = (i+j)//2
        add = 0
        for k in a:
            add += ((k+ans*2)**2)
        if add == c:
            break
        elif add<c:
            i = ans + 1
        else:
            j = ans - 1
    print(ans)                


for _ in range(int(input())):
    solve()