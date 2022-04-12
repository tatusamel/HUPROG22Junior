#bu kodun time comlexity si o(n) dir. O da sadece test caselerin sayısına bağlıdır. Yoksa içindeki işlemler sabit bir zamanda gerçekleşir.
test=int(input())
while(test>0):
    test-=1
    a,b=map(int,input().split())
    div=a//b
    x1=b*(div+1);x2=b*div
    minfark=min(abs(a-x1),abs(a-x2))
    print(minfark)