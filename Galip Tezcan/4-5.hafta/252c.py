nk = input().split()
 
n = int(nk[0])
 
k = int(nk[1])
 
arr = list(map(int, input().rstrip().split()))

answer = 0
location = 0
for i in range(2,n):
    while arr[i]-arr[location]>k:
        location+=1    
    answer += ((i-location) * ( i -location- 1))/2

print(int(answer))