for i in range((int(input()))):
    n,m=map(int,input().split())
    s1=input()
    s2=input()
    c=0
    f=0
    def check(s1,s2):
        c=0
        d=0
        for i in range(1,len(s1)):
            if(s1[i]==s1[i-1]):
                c+=1
        for i in range(1,len(s2)):
            if(s2[i]==s2[i-1]):
                c+=1
        #print(c)
        if(c==0):
            print("YES")
        elif(c==1 and s1[len(s1)-1]!=s2[len(s2)-1]):
           print("YES")
        else:
           print("NO")
        #print(c)
        
        # if(s[0]==s[1]):
        #     return False
        # else:
        #     return True
    check(s1,s2)
    #check(s2)
    #print(check(s1))
    # if(check(s1)==True and check(s2)==True):
    #     print("YES")
    # elif(check(s1)==True and s1[len(s1)-1]!=s2[len(s2)-1]  or check(s2)==True and s2[len(s2)-1]!=s1[len(s1)-1]):
    #     print("YES")
    # else:
    #     print("NO")
    #print(c)