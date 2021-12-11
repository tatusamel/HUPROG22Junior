# Serkan Karagoz
def countingValleys(steps, path):
    height = 0
    valleyCount = 0
    for i in path:
        if i == 'U':
            if(height == -1):
                valleyCount += 1
            height += 1
        else:
            height -= 1
    return valleyCount
