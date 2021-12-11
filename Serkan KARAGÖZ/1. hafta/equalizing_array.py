# Serkan Karagoz
def equalizeArray(arr):
    repeat_times = dict()
    for i in arr:
        if(repeat_times.keys().__contains__(i)):
            repeat_times[i] += 1
        else:
            repeat_times[i] = 1

    max_repeat = 0
    for i in repeat_times.keys():
        max_repeat = max(max_repeat, repeat_times[i])

    return len(arr) - max_repeat
