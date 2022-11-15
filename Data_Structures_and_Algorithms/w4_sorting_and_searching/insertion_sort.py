

def insertion_sort(list):
	"""
		list: an array
	"""
	for i in range(len(list)-1):
		loc = i
		while(loc >= 0 and list[loc+1]<list[loc]):
			if list[loc+1] < list[loc]:
				list[loc], list[loc+1]= list[loc+1], list[loc]
			loc-=1


list = [9, 7, 6, 15, 16, 5, 10, 11]

print("Before Sorting")
print(list)
insertion_sort(list)
print("After Sorting")
print(list)