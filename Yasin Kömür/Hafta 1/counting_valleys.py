#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'countingValleys' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER steps
#  2. STRING path
#

def countingValleys(steps, path):
    counter = 0
    seaLevel = 0
    
    myDict = {"U": 1, "D": -1}
    
    for s in path:
        seaLevel += myDict[s]
        if seaLevel == 0 and s == "U":
            counter = counter + 1
    return counter

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    steps = int(input().strip())

    path = input()

    result = countingValleys(steps, path)

    fptr.write(str(result) + '\n')
    fptr.close()

