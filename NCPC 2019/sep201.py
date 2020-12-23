import math

t=int(input())

while(t>0):
    n=int(input())
    brh=[]
    count=0
    for i in range(n):
        a=int(input())
        if(a in brh):
            count+=1
            brh.append(a)
    print(count)
    t--
