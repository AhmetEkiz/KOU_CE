# binary search algorithm in Python

from ast import And


def binary_search(list, value):
	first = 0		 	# first index of list
	last = len(list)-1  # last index of list
	
	while(last >= first):
		middle = (first+last)//2

	# this doesn't work right cuz overflows the list
	# while(True):
	# 	middle = (first+last)//2	
		# if (first == middle or middle == last) and list[middle] != value:
		# 	return -1

		if list[middle] == value:
			return middle
		elif value < list[middle]:
			last = middle-1
		elif value > list[middle]:
			first = middle+1

	return -1

list = [10, 14, 19, 26, 27, 30, 31, 33, 35, 42, 44]

test_list = [2, 10, 19, 30, 42, 44, 57];

for value in test_list:
	result = binary_search(list, value)

	if result != -1:
		print(f"Index of value {value} is {result}")
	else:
		print(f"{value} is not in the list.")