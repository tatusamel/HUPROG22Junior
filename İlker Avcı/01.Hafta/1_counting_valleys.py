#!/usr/bin/env python3

def main():
    steps = int(input())
    path = input().strip()
    print(countingValleys(steps, path))

def countingValleys(steps:int, path:str) -> int:
    valleys = 0
    altitude = 0
    for letter in path:
        if letter == 'D':
            if altitude == 0:
                valleys += 1
            altitude -= 1
        else:
            altitude += 1
    return valleys

if __name__ == "__main__":
    main()