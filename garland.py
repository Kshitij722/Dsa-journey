t = int(input())
for i in range(t):
    s = input()
    a = list(set(s))
    if(len(a) == 4):
        print(4)
    elif(len(a)==1):
        print(-1)
    elif(len(a)==2):
            b = s.count(a[0])
            c = s.count(a[1])
            if(b==c):
                print(4)
            else:
                 print(6)    
            # if(b>c):
            #     if(c==s[0]):
            #         print(5)
            #     else:
            #         print(6)         
                
            # if(b<c):
            #     if(b == s[0] ):
            #         print(5)
            #     else:
            #         print(6)     
    else:
        print(4)
    
