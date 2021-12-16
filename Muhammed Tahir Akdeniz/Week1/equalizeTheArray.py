def equalizeArray(arr):
    return len(arr) - max([arr.count(i) for i in arr])