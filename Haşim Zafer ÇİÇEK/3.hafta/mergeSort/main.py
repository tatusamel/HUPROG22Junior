def mergeSort(arr):
    if len(arr) >1:
        m = (len(arr) + 1)  // 2
        left = arr[:m]
        right = arr[m:]
        mergeSort(left)
        mergeSort(right)
        merge(arr,left,right)
def merge(arr,left,right):
    counter = 0
    while counter != len(arr):
        if len(left) == 0:
            arr[counter] = right.pop(0)
        elif len(right) ==0:
            arr[counter] = left.pop(0)
        elif left[0] > right[0]:
            arr[counter] = right.pop(0)
        else:
            arr[counter] = left.pop(0)
        counter +=1