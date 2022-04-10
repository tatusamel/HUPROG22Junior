#!/usr/bin/env python3

from typing import Tuple


def main():
    t: int = int(input())
    tests: list = []

    for _ in range(t):
        tests.append(int(input()))

    for n in tests:
        print(*solution(n))

"""
In order to maximize abs(a-b), we must have gcd(a,b) = c = 1
Because of a, b and c must be all different, if c gets a value of anything other than 1,
this will result in the decrease in the value of abs(a-b)

For even values of N, the answer is (2, N-3, 1), no exceptions

For odd values of N, we must consider some other possibilities, such as
1) a and b could be even, meaning that their gcd wouldn't be equal to 1 anymore
2) gcd(a,b) could be an odd number (other than 1)
3) a and b could be equal

In order to bypass the 1st case, we simply consider only the odd values of a and b, 
so the for loop only traverses through even values of i

For the 2nd case, we check that b % a != 0

For the 3rd case, we check that none of the pairs are equal

"""
def solution(n: int) -> Tuple[int, int, int]:
    if n % 2 == 0:
        return 2, n - 3, 1

    for i in range(4, n // 2 + 1, 2):
        a, b, c = (i - 1, n - i, 1)
        if b % a != 0 and a != b and b != c and a != c:
            return a, b, c


if __name__ == '__main__':
    main()
