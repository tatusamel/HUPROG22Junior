import random
import time


from QuickSortDeneme import quickSort
from BubbleSortDeneme import bubbleSort


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
