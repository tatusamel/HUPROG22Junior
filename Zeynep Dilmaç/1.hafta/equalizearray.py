def equalizeArray(arr):
    maxcount=max(arr,key=arr.count)
    numdel=0
    for i in arr:
        if(i!=maxcount):
            numdel+=1
    return numdel

if __name__ == '__main__':

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = equalizeArray(arr)

    print(result)