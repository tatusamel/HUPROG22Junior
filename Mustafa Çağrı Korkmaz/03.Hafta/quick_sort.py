def partition(start_index,last_index,lst):
    pivot = lst[last_index]  # it depends on you but ı have chosen the last item of the list as pivot
    current_index = start_index  # to track the available index for numbers that are less than pivot in the list
    for i in range(start_index,last_index):
        if lst[i] <= pivot:
            lst[current_index], lst[i] = lst[i], lst[current_index]
            current_index += 1
    lst[last_index], lst[current_index] = lst[current_index], lst[last_index]  # last current_index should be pivot index
    return current_index


def quick_sort(start_index,last_index,lst):
    if start_index < last_index:
        pivot_index = partition(start_index,last_index,lst)  # to obtain pivot index after partition process
        quick_sort(start_index,pivot_index-1,lst)  # left side of the pivot
        quick_sort(pivot_index+1,last_index,lst)  # right side of the pivot


##### ----TEST---- #####
a = [7,2,1,6,8,5,3,4,10,0,19,13,25,18,11,9]
quick_sort(0,len(a)-1,a)
print(a)


