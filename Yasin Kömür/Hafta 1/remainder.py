forTimes = int(input())

for i in range(forTimes):
    line = input().split()
    x = int(line[0])
    y = int(line[1])
    n = int(line[2])
    
    maxi = n % x
    
    if maxi > y:
        print(n + y -maxi)
    elif maxi == y:
        print(n)
    else maxi < y:
        print(n + y -(maxi + x))
        
    
