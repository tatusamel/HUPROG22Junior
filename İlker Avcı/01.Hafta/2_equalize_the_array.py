#!/usr/bin/env python3
from collections import defaultdict

def main():
    arrsize = int(input())
    arr = [int(x) for x in input().strip().split()]
    print(equalizeArray(arr, arrsize))
    pass

def equalizeArray(arr:list, arrsize: int) -> int:
    dc = defaultdict(int)
    max_num = 0
    for num in arr:
        dc[num] += 1
        if dc[num] > max_num: 
            max_num = dc[num]
    return arrsize - max_num

if __name__ == "__main__":
    main()