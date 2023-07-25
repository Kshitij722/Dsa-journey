n , t = map(int,input().split())
a = list(map(int,input().split()))
b=[]
for i in a:
    if(i<0):
        b.append(i)

if(len(b)<=t):
    print(abs(sum(b)))
else:
    d = sorted(b)
    # print(d)
    print(abs(sum(d[:t])))
