t = int(input())
s = input()
a = len(s)
d ={}
c=''
b = sorted(list(set(s)))
#print(b)
for i in range(len(b)):
    d[b[i]] = s.count(b[i])
print(d)
value = d.values()
g =sorted(set(value))
print(g)
# if(len(b)==1):
#     print(s)
# else:    
#     if(len(g)==1):
#         for i in range(len(b)):
#            c = c+b[i]
#         print(c*len(b))   
#     else:
#         print(-1)    
            