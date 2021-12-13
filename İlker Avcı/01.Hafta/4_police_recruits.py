#!/usr/bin/env python3

def main():
    input() # unneeded input for this solution
    events = [int(x) for x in input().strip().split()]
    polices, crimes = 0, 0
    for event in events:
        if event != -1: # police recruit
            polices += event
        else: # crime
            if polices > 0:
                polices -= 1
            else:
                crimes += 1
    print(crimes)

if __name__ == "__main__":
    main()