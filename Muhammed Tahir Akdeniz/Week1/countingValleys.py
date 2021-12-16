def countingValleys(steps, path):
    level = 0
    isInValey = False
    valeyCount = 0
    
    for i in path:
        level += 1 if i == "U" else -1
    
        if level < 0:
            isInValey = True 
            
        if level == 0 and isInValey:
            valeyCount += 1
            isInValey = False
    
    return valeyCount