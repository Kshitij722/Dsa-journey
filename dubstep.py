s = input()
a = 'WUB'
b = s.split('WUB')
c = [x for x in b if x!='']
for i in range(len(c)):
    print(c[i],end=' ')