def bubble_sort(arr):
    isSorted = False
    while not isSorted:
        isSorted = True
        for i in range(len(arr)-1):
            if arr[i] > arr[i+1]:
                arr[i],arr[i+1] = arr[i+1],arr[i]
                isSorted = False