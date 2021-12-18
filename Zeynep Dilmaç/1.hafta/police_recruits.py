length=int(input())
list1=list(map(int,input().split()))
hiring=0
crimes=0
current=0
for i in range(length):
    if list1[i]==-1:
        current+=1
    if list1[i]>0:
        hiring=list1[i]
        crimes += current
        current=0
    if hiring>0 and current>0:
        current=current-hiring
        hiring=0
crimes+=current
print(crimes)