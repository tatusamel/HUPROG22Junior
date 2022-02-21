import time


def merge_process(left_lst, right_lst):
    result_lst = []
    i = 0  # to store the current index of left sublist.
    j = 0  # to store the current index of right sublist.

    # this while loop merge these two lists by arranging them.
    while i < len(left_lst) and j < len(right_lst):
        if left_lst[i] <= right_lst[j]:
            result_lst.append(left_lst[i])
            i += 1
        else:
            result_lst.append(right_lst[j])
            j += 1

    # left and right sublists are already sorted.
    # one of them hasn't been added completely to the result list.
    # these while loops detect one of them and add remaining items of it.
    while i < len(left_lst):
        result_lst.append(left_lst[i])
        i += 1
    while j < len(right_lst):
        result_lst.append(right_lst[j])
        j += 1
    return result_lst


def merge_sort(lst):
    if len(lst) < 2:
        return lst  # if the length of the list is less than 2 don't split it into two sublists, return itself.
    left_lst = merge_sort(lst[:(len(lst) // 2)])  # to obtain left sublist by recursive method.
    right_lst = merge_sort(lst[len(lst) // 2:])  # to obtain right sublist by recursive method.
    return merge_process(left_lst, right_lst)  # to merge two sublists by putting them in order.


###### -----TESTS----- #######

# implementation test
a = [10,9,8,7,6,5,4,3,2,1]
print(merge_sort(a))


# time test
b = []
for i in range(10 ** 6):
    b.append(i)
b.reverse()

start_time = time.time()
merge_sort(b)
print("consumed time for 10^6 item: " + str(time.time() - start_time))
