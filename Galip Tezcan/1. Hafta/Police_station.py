t = int(input())
arr=input().split()

police_force=0
vakalar=0
for i in arr:
    i=int(i)

    if police_force>0:
        police_force += i
    else:
        vakalar+=1
        police_force=0
print(vakalar)

