# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    c=[]
    d=[]
    e=[]
    count=0
    for i in range(n):
        if(a[i]>=0):
            c.append(a[i])
        else:
            d.append(a[i])
    if(len(c)!=0 and len(d)!=0):
        count = 3
    elif(len(c)==0 and len(d)!=0):
        count=1
    elif(len(c)!=0 and len(d)==0):
        count=2
    if(count==1):
            if(max(d)!=-1):
                print(-(max(d))-1)
            else:
                print("-1")    
    elif(count==2):
        if(min(c)!=0):
            print(min(c)-1)
        else:
            print("-1")
    elif(count==3):
        
            if(-(max(d))>min(c)):
              print(min(c)-1)
            else:
               print(-(max(d))-1)  
        
    else:
        print("-1")