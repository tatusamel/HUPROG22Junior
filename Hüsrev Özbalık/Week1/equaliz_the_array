def equalizeArray(arr):
    my_beautiful_dic = {}
    for i in arr:
        if not i in my_beautiful_dic:
            my_beautiful_dic[i] = 1;
        else: my_beautiful_dic[i] += 1;
    big = 0
    for v in my_beautiful_dic.values():
        if v > big:
            big = v
    return len(arr) - big
