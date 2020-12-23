import math

t=int(input())

while(t>0):
    n=int(input())
    brh=[]
    brh2=[]
    count=0
    brh2=list(map(int, input().split()))
    print(brh2)
    for i in range(n):
        a=brh2[i]
        if(not(a in brh)):
            count+=1
            brh.append(a)
    print(count)
    t-=1
