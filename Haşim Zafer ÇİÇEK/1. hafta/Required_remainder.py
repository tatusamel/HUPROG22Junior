t = int(input())
for i in range(t):
    numbers = list(map(int,input().split()))
    mod = numbers[0]
    remainder = numbers[1]
    n = numbers[2]
    for number in range(n,n-mod,-1):
        if number % mod == remainder:
            print(number)
            break
