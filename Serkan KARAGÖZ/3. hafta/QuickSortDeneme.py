def quickSort2(lst, low, high):  # other quick sort function to be called
    if high - low >= 1:
        pivot = partition2(lst, low, high)
        quickSort2(lst, low, pivot - 1)
        quickSort2(lst, pivot + 1, high)


def quickSort(lst):  # first quick sort function to be called
    quickSort2(lst, 0, len(lst) - 1)


def partition2(lst, low, high):  # other partition function to be called
    if len(lst) == 0:
        return
    pivot = lst[high]
    i = low - 1
    for j in range(low, high):
        if lst[j] < pivot:  # swap
            i += 1
            lst[j], lst[i] = lst[i], lst[j]

    lst[high], lst[i + 1] = lst[i + 1], lst[high]
    return i + 1


def partition(lst):  # first partition function to be called
    return partition2(lst, 0, len(lst) - 1)
