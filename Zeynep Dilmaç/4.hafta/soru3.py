import math

test=int(input())
while(test>0):
    test=test-1
    n=int(input())
    if(n%2==0):
        a=n-3;b=2;c=1
        print(b,a,c)
    else:
        c=1
        a=n-3;b=2
        while(a>b):
            if(math.gcd(a,b)==1):
                print(b,a,c)
                break
            a-=1
            b+=1