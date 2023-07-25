t = int(input())
for i in range(t):
    c=[]
    d=[]
    l , r = map(int,input().split())
    if(r>=100 and l<=90):
        print(90)
    elif(l>90 and r<899):
            print(109)     
    elif(l<900 and r>=9000):
            print(900)

    elif(l>900 and r>=9000):
          print(9000)
    elif(l>9000 and r>=90000):
          print(90000)
    elif(l>90000 and r>=900000):
          print(900000)                   
    else:                    
            for i in range(l,r+1):
                a = str(i)
                b = int(max((a))) - int(min((a)))
                c.append(b)
                d.append(i)
            print(d[c.index(max(c))])