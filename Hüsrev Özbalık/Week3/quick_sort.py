from random import randint as rint

def quick_sort(arr):
    if len(arr) == 0:
        return []
    elif len(arr) == 1:
        return arr
    pivot = arr[rint(0,len(arr) - 1)]
    smaller = []
    bigger = []
    for i in arr:
        if i > pivot:
            bigger.append(i)
        elif i < pivot:
            smaller.append(i)
    bigger = quick_sort(bigger)
    smaller = quick_sort(smaller)
    arr = []
    arr.extend(smaller)
    arr.append(pivot)
    arr.extend(bigger)
    return arr
