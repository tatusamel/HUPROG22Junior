# Serkan Karagoz
def remainder(x, y, n):
    r = n % x   # first remainder
    diff = r - y
    if diff < 0:
        return n - (diff + x)
    n -= (diff)

    return n


numberOfTestCases = int(input())
allCases = []
for i in range(numberOfTestCases):
    allCases.append([int(x) for x in input().split()])

for line in allCases:
    print(remainder(line[0], line[1], line[2]))
