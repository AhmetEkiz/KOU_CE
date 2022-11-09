# buble sort algorithm in python


list_1 = [14, 27, 33, 10, 35]

def buble_sort(list_1):
	size = len(list_1)-1

	for i in range(size):
		for j in range(size-i):
			if list_1[j] > list_1[j+1]:
				list_1[j] , list_1[j+1] = list_1[j+1], list_1[j] 


print(list_1)
buble_sort(list_1)
print(list_1)