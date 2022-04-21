t = int(input())
"""
a / b den kalan sayıyı b nin katına yuvarlarsak en az adımı buluruz.
"""
for i in range(t):
    a,b = list(map(int,input().split()))
    rem = a % b
    print(min(rem, b - rem))
