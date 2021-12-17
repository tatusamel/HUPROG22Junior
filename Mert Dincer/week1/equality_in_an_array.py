#!/bin/python3

import math
import os
import random
import re
import sys

def equalizeArray(arr):
    max_occurred = arr.count(max(arr,key=arr.count))
    return len(arr)-max_occurred

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = equalizeArray(arr)

    fptr.write(str(result) + '\n')

    fptr.close()