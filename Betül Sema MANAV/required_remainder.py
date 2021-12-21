test_cases = []
for _ in range(int(input())):
    temp = list(map(int,input().split()))
    test_cases.append(temp)

def remainder(case):
    for i in range((case[2]//case[0]),-1,-1):
        if i*case[0] + case[1] <= case[2]:
            return i*case[0] + case[1]
    
for case in test_cases:
    print(remainder(case))