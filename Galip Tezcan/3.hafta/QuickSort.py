def quick_sort(arr,r,l):
    i=l-1
    if l>r:
        return
    for j in range(l,r+1):
        if arr[j]<arr[r]:
            i+=1
            arr[i], arr[j]=arr[j], arr[i]

    if arr[r]<arr[i+1]:
        arr[i+1], arr[r]=arr[r], arr[i+1]

    
    if r-l<3:
        return 
    quick_sort(arr,i,l)
    quick_sort(arr,r,i+2)


    pass
liste=[1,8,3,9,4,5,7,11,12,18,21,13,15]
quick_sort(liste,len(liste)-1,0)
print(liste)