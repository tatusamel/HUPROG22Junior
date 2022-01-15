counter = 0
def selection_sort(arr):
    global counter
    if counter != len(arr) -1:
        minimum = (10 ** 5)
        index = 0
        for i in range(counter,len(arr)):
            if arr[i] < minimum:
                minimum = arr[i]
                index = i
        temp = arr[counter]
        arr[counter] = minimum
        arr[index] = temp
        counter += 1
        selection_sort(arr)