T=int(input())
for i in range(T):
    n=int(input())
    s=input()
    c=0
    
    # print(c)
    new=s.replace("AB",'')
    print(new)
    c1=new.count("A")
    c2=new.count("B")
    if(s.count("A")==n):
        print(n,0)
    elif(s.count("B")==n):
        print(0,n-1)
        
    elif(len(new)==n):
        
        print(c1-1,c2-1)
    
        
    elif(s[0]=="A"):
        print(c1+1,c2)
    else:
        print(c1,c2-1)