def countingValleys(steps, path):
    control = False
    konum = 0
    numvalley = 0
    for i in path:
        if (i == "D" and konum == 0):
            control = True
        if (control and konum == 0):
            numvalley += 1
            control = False
        if (i == "D"):
            konum -= 1
        else:
            konum += 1
    return numvalley


if __name__ == '__main__':
    steps = int(input().strip())

    path = input()

    result = countingValleys(steps, path)

    print(result)