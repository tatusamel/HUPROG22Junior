t = int(input())
for i in range(t):
    a,b = list(map(int,input().split()))
    rem = a % b
    print(min(rem, b - rem))
