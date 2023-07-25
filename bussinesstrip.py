t = int(input())
a = list(map(int,input().split()))
b = sorted(a)
sum1,c=0,0
for i in range(len(b)):
    sum1+=b[11-i]
    if(sum1>=t):
        break
    else:
        c+=1
if(t==0):
  print(c)
elif(c==len(b)):
    print(-1)
else:
    print(c+1)      