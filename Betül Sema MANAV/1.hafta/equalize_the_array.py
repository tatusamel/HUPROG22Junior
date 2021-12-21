def equalizeArray(arr):
    max_copies = 0
    for i in range(0,n):
        if arr.count(arr[i]) >= max_copies:
            max_copies = arr.count(arr[i])
    return n - max_copies 