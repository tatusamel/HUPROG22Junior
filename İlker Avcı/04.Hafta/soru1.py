#!/usr/bin/env python3

"""
Explanation:
    In order to find the greatest GCD of two numbers, these
    two numbers must have as many common divisors as possible.

    For the maximum GCD, these two numbers should be ideally the same.
    But since we cannot have duplicate numbers in pairs for this problem,
    we have to minimize the factor between these two numbers. The smallest
    factor we can get is 2. Thus, the ideal pair would be like (k, 2k).

    The bigger one of the pair, 2k, should be less than or equal to n.
    If n is an even number, then 2k = n and the pair would be (n/2, n).
    If n is an odd number, we will consider n-1 to be the greatest even number
    we can get. Then, the pair would be ((n-1)/2, (n-1)).
"""


def main():
    t: int = int(input())
    tests: list = []

    for i in range(t):
        tests.append(int(input()))

    for n in tests:
        solution(n)
    
def solution(n: int) -> int:
    if n % 2 != 0:
        n -= 1
    print(n//2, n)

if __name__ == '__main__':
    main()
