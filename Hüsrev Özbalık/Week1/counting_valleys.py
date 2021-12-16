def countingValleys(steps, path):
    altitude = 0
    valley = 0
    for i in path:
        if i == "D" and altitude == 0:
            valley += 1
        altitude += 1 if i == "U" else -1
    return valley
