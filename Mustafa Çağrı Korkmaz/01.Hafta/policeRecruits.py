count = 0
avail = 0
not_need = input()
input_list = list(map(int,input().split()))
for i in input_list:
    if i>0:
        avail += i
    else:
        if avail + i >= 0:
            avail += i
        else:
            count +=1
print(count)