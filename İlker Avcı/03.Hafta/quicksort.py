#!/usr/bin/env python3

def partition(arr: list, low: int, high: int) -> int:
    # pivot will be the last element
    pivot = arr[high]
    i = low - 1
    j = low
    while j <= high - 1:
        if arr[j] < pivot:
            i += 1

            #swap arr[i] and arr[j] if arr[j] is smaller than the pivot
            arr[i], arr[j] = arr[j], arr[i]

            j += 1

    #swap arr[i+1] and arr[high] (which is pivot)
    arr[i + 1], arr[high] = arr[high], arr[i + 1]

    return i + 1


def quicksort(arr: list, low: int, high: int):
    # Nothing to sort if low is greater than or equal to high
    if low >= high:
        return

    part_index = partition(arr, low, high)

    quicksort(arr, low, part_index - 1)  # Left side of the partitioning index
    quicksort(arr, part_index + 1, high)  # Right side of the partitioning index
