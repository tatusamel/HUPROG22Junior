#!/usr/bin/env python3

def mergesort(arr: list):
    # Can't sort anything if there are 0 or 1 items in the array
    if len(arr) <= 1:
        return

    # Splitting the array into two halves
    mid: int = len(arr) // 2
    left = arr[mid:]
    right = arr[:mid]

    # Sorting the both of the halves
    mergesort(left)
    mergesort(right)

    # Actual sorting and merging starts here,
    # which is the base case for this recursive func

    # Initializing the indexes for arrays
    # i is for right, j is for left, k is for the bigger array
    i = j = k = 0

    # We will overwrite the arr variable to store our sorted list, which was originally given unsorted
    # Since we have the original values in variables 'left' and 'right', this is no big deal

    # The smaller one gets into the result array
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            arr[k] = left[i]
            i += 1
        else:
            arr[k] = right[j]
            j += 1
        k += 1

    # If any element is left in either of the sub-arrays, put them all into the bigger array
    while i < len(left):
        arr[k] = left[i]
        i+= 1
        k +=1

    while j < len(right):
        arr[k] = right[j]
        j += 1
        k += 1
    