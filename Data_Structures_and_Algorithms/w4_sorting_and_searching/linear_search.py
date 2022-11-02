# Linear Search Algorithm in Python

list = [10, 14, 19, 26, 27, 31, 33]

def linear_search(list, value):
	for i in range(len(list)):
		if list[i]==value:
			return i
	return -1


value = 27

result = linear_search(list, value)

if result != -1:
	print(f"Index of value {value} is {result}")
else:
	print(f"{value} is not in the list.")
