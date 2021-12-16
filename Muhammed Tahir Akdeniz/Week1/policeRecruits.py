input()
result = 0
untreated = 0
for i in map(int, input().split(" ")):
    result += i
    if result < 0:
        untreated -= result
        result = 0
print(untreated)