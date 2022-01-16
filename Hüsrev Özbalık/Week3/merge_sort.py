def merge_sort(arr):
    if len(arr) == 1:
        return arr
    elif len(arr) == 2:
        return arr if arr[0] < arr[1] else arr[::-1]
    else:
        left = merge_sort(arr[:int(len(arr)/2)])
        right = merge_sort(arr[int(len(arr)/2):])
        left_i = 0
        right_i = 0
        arr = []
        while True:
            if left[left_i] < right[right_i]:
                arr.append(left[left_i])
                left_i += 1
                if left_i == len(left):
                    arr.extend(right[right_i:])
                    break
            else:
                arr.append(right[right_i])
                right_i += 1
                if right_i == len(right):
                    arr.extend(left[left_i:])
                    break
        return arr
