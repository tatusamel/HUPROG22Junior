for _ in range(int(input())):
    div, remain, num = map(int, input().split())
    y = num%div
    if y < remain:
        print(num-y-div+remain)
    elif y == remain:
        print(num)
    else:
        print(num-(y-remain))