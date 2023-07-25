import math
n , m =map(int,input().split())
count = 0
d = math.floor(math.sqrt(n))
# print(d)
for a in range(d+1):
    b = n - (a**2)
    # print(b)
    c = (b**2)+a
    # print(c)
    if(c==m):
        count+=1
print(count)        
