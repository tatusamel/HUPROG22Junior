t = int(input())

for i in range(t):
    arr = list(map(int, input().split()))
    if arr[2] % arr[0] >= arr[1]:
        print(arr[2] - (arr[2] % arr[0]) + arr[1])
    else:
        print(arr[2]-(arr[0]-arr[1])-(arr[2] % arr[0]))
