s , n = map(int,input().split())
c=0
d=[]
for i in range(n):
    a , b= map(int,input().split())
    d.append((a,b))
f = sorted(d)
# print(f)    
#     d[a] = b
# f = dict(sorted(d.items()))
# print(d)
# print(f)
for i in f:
    if(s > i[0]):
        s+=i[1]
        c+=1
if(c==n):
    print("YES")
else:
    print("NO")                