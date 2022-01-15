import random
import time


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


""" BUBBLE SORT """


def bubbleSort(lst):

    if len(lst) > 1:
        sorted = False
        while not sorted:
            sorted = True
            for i in range(len(lst) - 1):
                if lst[i] > lst[i + 1]:
                    lst[i], lst[i + 1] = lst[i + 1], lst[i]
                    sorted = False


print("Runtime may last up to 15 second for a list with size of 10000 element")

listSize = 10000
minRand = 0  # minimum random number
maxRand = 100000  # maximum random number

quickList, quickSortTime = [], 0
bubbleList, bubbleSortTime = [], 0

for i in range(listSize):
    quickList.append(random.randint(minRand, maxRand))  # constructing the list consists of random numbers

bubbleList = quickList.copy()

start = time.time()
quickSort(quickList)
end = time.time()
quickSortTime = end - start  # performance of quick sort algorithm ( O(n log n) )

start = time.time()
bubbleSort(bubbleList)
end = time.time()
bubbleSortTime = end - start  # performance of bubble sort algorithm ( O(n^2) )

print("Time elapsed to sort the list with quick sort: " + str(quickSortTime))
print("Time elapsed to sort the list with bubble sort: " + str(bubbleSortTime))
print("Quick sort worked " + str(bubbleSortTime / quickSortTime) + " times faster than bubble sort")
