# cook your dish here
t = int(input())
for i in range(t):
    n = int(input())
    a=[]
    b=[]
    for i in range(1,(n**2)+1):
        if(i%2==0):
            a.append(i)
        else:
            b.append(i)
    c = a+b
            
    i =0
    while(i<len(c)):
        for l in range(i,n+i):
            print(c[l])
        i+=n
            
  
    
        
        