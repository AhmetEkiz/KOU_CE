

def insertion_sort(list):
	"""
		list: an array
	"""
	for i in range(len(list)-1):
		loc = i
		print("for loc", loc)
		while(loc >= 0 and list[loc+1]<list[loc]):
			print("before",list[loc])
			print(list)
			if list[loc+1] < list[loc]:
				temp = list[loc]
				list[loc] = list[loc+1]
				list[loc+1] = temp
			print("after",list[loc])
			print(list)
			loc-=1
			print("loc",loc)

list = [9, 7, 6, 15, 16, 5, 10, 11]

print("Before Sorting")
print(list)
insertion_sort(list)
print("After Sorting")
print(list)