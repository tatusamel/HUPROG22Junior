#!/usr/bin/env python3

"""
    Time complexity: O(1)
"""

import math

def main():
    t: int = int(input())
    tests: list = []

    for _ in range(t):
        tests.append((int(x) for x in input().strip().split()))
    
    for test in tests:
        print(solution(*test))

def solution(a: int, b: int) -> int:
    low: int = math.floor(a/b)*b
    high: int = math.ceil(a/b)*b
    return min(high-a, a-low)

if __name__ == '__main__':
    main()
