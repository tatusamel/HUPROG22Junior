import random
import time
from MergeSortDeneme import mergeSort
from QuickSortDeneme import quickSort


listSize = 100000
minRand = 0  # minimum random number
maxRand = 100000  # maximum random number

quickList, quickSortTime = [], 0
mergeList, mergeSortTime = [], 0

for i in range(listSize):
    quickList.append(random.randint(minRand, maxRand))  # constructing the list consists of random numbers

mergeList = quickList.copy()

start = time.time()
quickSort(quickList)
end = time.time()
quickSortTime = end - start  # performance of quick sort algorithm

start = time.time()
mergeSort(mergeList)
end = time.time()
mergeSortTime = end - start  # performance of merge sort algorithm

print("Time elapsed to sort the list with quick sort: " + str(quickSortTime))
print("Time elapsed to sort the list with merge sort: " + str(mergeSortTime))