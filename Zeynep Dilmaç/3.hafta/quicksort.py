#yapamadım..
def quicksort(arr,s,l):
    if s<l:
        p=partition(arr,s,l)
        quicksort(arr,s,p-1)
        quicksort(arr,p+1,l)
def partition(arr,p,l):
    pivot=arr[p]
    x=l+1
    for i in range(p+1,l+1):
        if(arr[i]>pivot):
            x -= 1
            (arr[i],arr[x])=(arr[x],arr[i])
    (arr[p],arr[x])=(arr[x],arr[p])
    return x
list1=[2,5,1,4,8,3]
quicksort(list1,0,len(list1)-1)
print(list1)