n = int(input())
free = 0
noo = 0
for i in list(map(int,input().split(" "))):
    free += i
    if free < 0:
        noo += 1
        free = 0
print(noo)
