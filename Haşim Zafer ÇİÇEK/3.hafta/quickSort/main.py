new_sorted_array = []
def quickSort(arr):
    global counter
    if len(arr) == 0:
        pass
    elif len(arr) == 1:
        new_sorted_array.append(arr[0])
    else:
        counter = 0
        pivot = arr[-1]
        left = []
        right = []
        for number in arr[:-1]:
            if number < pivot:
                left.append(number)
                counter +=1
            else:
                right.append(number)
        quickSort(left)
        new_sorted_array.append(pivot)
        quickSort(right)
    return new_sorted_array