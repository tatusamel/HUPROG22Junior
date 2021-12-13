#!/usr/bin/env python3

def main():
    no_of_cases = int(input())
    cases = []
    for _ in range(no_of_cases):
        cases.append((int(x) for x in input().strip().split()))
    
    for case in cases:
        (x, y, n) = case
        # k <= n
        # k % x = y
        # k = ax + y <= n
        # k-y = ax <= n-y  find the greatest value of a
        a = (n-y) // x
        k = a*x + y
        print(k)

if __name__ == "__main__":
    main()