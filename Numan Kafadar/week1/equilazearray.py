#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the equalizeArray function below.
def equalizeArray(arr):
    dct={}
    for i in arr:
        if i in dct:
            dct[i]+=1
        else:
            dct[i]=1
    lst=[]
    for s in dct:
        lst.append(len(arr)-dct[s])
    return min(lst)
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    result = equalizeArray(arr)

    fptr.write(str(result) + '\n')

    fptr.close()