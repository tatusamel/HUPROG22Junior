n = int(input())
events = list(map(int,input().split()))

def police_recruits(events):
    punishment = 0
    crime = 0
    for x in events:
        if x >= 0:
            punishment += x
        elif x < 0 and punishment == 0:
            crime += 1
        elif x < 0:
            punishment += x
    return crime

police_recruits(events)