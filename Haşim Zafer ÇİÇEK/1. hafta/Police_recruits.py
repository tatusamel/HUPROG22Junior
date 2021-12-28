n = int(input())
crimes = list(map(int,input().split()))
police_officer_number = 0
untreated = 0
for crime in crimes:
    if police_officer_number == 0 and crime == -1:
        untreated += 1
    elif crime == -1:
        police_officer_number -= 1
    else:
        police_officer_number += crime
print(untreated)
