n , m = map(int,input().split())
a = list(map(int,input().split()))
c=0
for i in range(n):
    d = sorted(a , reverse=True)
   
    c += d[0]
    d[0]=d[0] - 1
    
print(c)
# for i in range(n):
#     d = sorted(a)
#     e += d[0]
#     a[d[0]] = d[o] - 1