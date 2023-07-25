n , t = map(int,input().split())
if(n%2==0):
    mid = n//2
    if(t<=mid):
        print(2*t -1)
    else:
        print(2*(t-mid) )           
else:
    mid = (n+1)//2
    if(t<=mid):
        print((2*t)-1)
    else:
        print(2*(t-mid))            