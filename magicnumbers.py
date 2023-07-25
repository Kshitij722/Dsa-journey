a = list(map(int,input()))
b , c, d=0,0,0
for i in range(len(a)):
    if(a[i]==1):
        if(a[i]==1 and a[i+1]!=1):
            b+=1
            i+=1
        elif(a[i]==1 and a[i+1]==4 and a[i+2]==4):
            c+=3
            i+=2
        elif(a[i]==1 and a[i+1]==4 and a[i+2]!=4):
            d+=2
            i+=1
    else:
        print("NO")
if(b+c+d == len(a)):
    print("YES")
else:
    print("NO")           