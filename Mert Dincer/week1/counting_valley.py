#!/bin/python3

import math
import os
import random
import re
import sys

def countingValleys(steps, path):
    is_sea_level = True
    path_list = []
    for i in range(steps):
        if(path[i] == "D"):
            path_list.append(-1)
        elif(path[i] == "U"):
            path_list.append(+1)
    
    valley = 0
    mountain = 0
    current_alt = 0
    prev_alt = 0
    for i in range(steps):
        if(is_sea_level):
            if(prev_alt < 0):
                valley += 1
            elif(prev_alt > 0):
                mountain += 1
            prev_alt = current_alt
            current_alt += path_list[i]
            is_sea_level = False
        else:
            if current_alt >= 1:
                if (path_list[i] < 0):
                    if(current_alt == 1):
                        is_sea_level = True
                prev_alt = current_alt
                current_alt += path_list[i]
            elif current_alt <= -1:
                if (path_list[i] > 0):
                    if (current_alt == -1):
                        is_sea_level = True
                prev_alt = current_alt
                current_alt += path_list[i]   
    
    if(is_sea_level):
            if(prev_alt < 0):
                valley += 1
            elif(prev_alt > 0):
                mountain += 1
    return valley;                    
                        
                        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    steps = int(input().strip())

    path = input()

    result = countingValleys(steps, path)

    fptr.write(str(result) + '\n')

    fptr.close()
