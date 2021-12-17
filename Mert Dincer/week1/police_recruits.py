n = int(input())
arr = [int(i) for i in input().strip().split()]
available_officer = 0
untreated_cases = 0
for i in arr:
    if i == -1:
        if available_officer == 0:
            untreated_cases += 1
        else:
            available_officer -= 1
    if i > 0:
        available_officer += i
print(untreated_cases)