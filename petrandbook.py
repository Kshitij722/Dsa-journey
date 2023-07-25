n = int(input())
a = list(map(int,input().split()))
b=0
d=sum(a)

if(n%d != 0):
        c = n%d
        for i in range(7):
            b += a[i]
            if(b>=c):
                print(i+1)
                break
    
else:
            if(d>=n):
                for i in range(7):
                    b+= a[i]   
                    if(b>=n):
                        print(i+1)
                        break     
            else:
                  if(d==1):
                        print(a.index(1)+1)
                  else:
                        for i in range(7):
                              b+=a[i]
                              if(b>=(n/d)):
                                    print(i+1)
                                    break              