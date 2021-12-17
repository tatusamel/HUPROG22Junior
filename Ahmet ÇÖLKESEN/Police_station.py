hire, count, n, lst = 0, 0, int(input()), list(map(int,input().split()))
for i in range(n):
    hire += lst[i]
    if hire < 0:
        count += 1
        hire = 0
print(count)