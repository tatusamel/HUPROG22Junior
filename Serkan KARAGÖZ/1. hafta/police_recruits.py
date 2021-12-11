# Serkan Karagoz
def numberOfRecruit(size, events):
    events = [int(x) for x in events.split()]
    cops = 0
    recruits = 0
    for i in events:
        if i > 0:
            cops += i
        elif i == -1:
            if cops == 0:
                recruits += 1
            else:
                cops -= 1
    return recruits

size = int(input())

events = input()

print(numberOfRecruit(size, events))
