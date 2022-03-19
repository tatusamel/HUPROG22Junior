t=int(input())
mod=998244353
for asdad in range(t):
    mx=0
    mcnt=0
    n=int(input())
    liste=[-1]
    for a in input().split():
        liste.append(int(a))
        mx=max(mx,int(a))
    mcnt=liste.count(mx)
    p,b=1,1
    ans=1
    if mcnt==1:
        mcnt=liste.count(mx-1)
        p=mcnt+1
        b=mcnt
    for i in range(1,n+1):
        if(i==p):
            ans=(ans*b)%mod
        else:
            ans=(ans*i)%mod
    print(ans)
