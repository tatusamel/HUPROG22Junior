def countingValleys(steps, path):
    hike = list(path)
    altitude = 0
    count = 0
    for i in range(steps):
        if hike[i] == "U":
            altitude += 1
        elif hike[i] == "D":
            altitude -= 1
        if altitude == 0 and hike[i] == "U":
            count += 1
    return count