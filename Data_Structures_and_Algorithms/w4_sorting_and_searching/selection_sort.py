

def selection_sort(list):

	for i in range(len(list)):
		least_index = i  # new starting point
		for j in range(i+1, len(list)):
			if list[least_index] > list[j]:  # update least index
				least_index = j

		list[i], list[least_index] = list[least_index], list[i]		
	

list = [9, 7, 6, 15, 16, 5, 10, 11]

print("Before Sorting")
print(list)
selection_sort(list)
print("After Sorting")
print(list)