numberOfInputs = int(input())
for _ in range(numberOfInputs):
    x, y, n = map(int, input().split(" "))
    print(int((n - y)/x)*x + y)