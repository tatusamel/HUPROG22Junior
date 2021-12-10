def countingValleys(path):
    counter = 0
    counter2 = 0
    for i in path:
        if i == "U":
            counter += 1
            if counter == 0:
                counter2 += 1
        else:
            counter -= 1
    return counter2


if __name__ == '__main__':
    steps = int(input().strip())

    path = input()

    result = countingValleys(path)

    print(result)