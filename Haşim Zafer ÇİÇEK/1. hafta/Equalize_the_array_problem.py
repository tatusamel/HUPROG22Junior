def equalizeArray(arr):
    maximum = 0
    for i in set(arr):
        count_of_i = arr.count(i)
        if count_of_i > maximum:
            maximum = count_of_i
    return len(arr) - maximum


if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = equalizeArray(arr)

    print(result)
