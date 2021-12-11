t = int(input())

for s in range(t):
    arr=input().split()
    x=int(arr[0])
    y=int(arr[1])
    n=int(arr[2])
    k=0
    if n%x==y:
        k=n
    elif y>n%x:
        k=n-(x-y+n%x)
    elif y<n%x:
        k=n-n%x+y
    print(k)