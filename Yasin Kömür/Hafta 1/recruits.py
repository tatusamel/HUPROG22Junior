n = int(input())
input_list = list(map(int, input().split(' ')))
counter, answer = (0, 0)

def func(in_list):
	global counter, answer
	for i in input_list:
		if i == -1:
			if counter > 0:
				counter -= 1
			else:
				answer += 1
		else:
			counter += i
	return answer

print(func(input_list))

