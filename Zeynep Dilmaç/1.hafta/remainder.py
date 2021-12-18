length=int(input())
for i in range(length):
    mod,rem,x=map(int,input().split())
    for num in range(x,-1,-1):
        if num%mod==rem:
            print(num)
            break