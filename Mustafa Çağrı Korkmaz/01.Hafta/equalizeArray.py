not_need = input()
arr = list(map(int,input().split()))
max_var_value = 0
repeated = []
for i in arr:
    if i not in repeated:
        repeated.append(i)
        if arr.count(i) > max_var_value:
            max_var_value = arr.count(i)

print(len(arr) - max_var_value)