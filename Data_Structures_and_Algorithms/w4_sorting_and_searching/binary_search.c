// binary search in C

#include <stdio.h>

int binary_search(int list[], int size_of_list, int value){
	int first = 0;
	int last = size_of_list-1;
	int middle;

	while(last >= first){
		middle = (first+last)/2;

	// this doesn't work right cuz overflows the list
	// while(){
	// 	middle = (first+last)/2;
		// if(first==middle && last==middle && list[middle]!=value)
		// 	return -1;

		if (value == list[middle])
			return middle;

		else if(value < list[middle])
			last = middle-1;

		else if(value > list[middle])
			first = middle+1;

		//printf("numbers: %d %d %d\n", first, last, middle);
	}
	return -1;
}


int main(){

	int list[] = {10, 14, 19, 26, 27, 30, 31, 33, 35, 42, 44};
	int size_of_list = sizeof(list)/sizeof(list[0]);
	int value = 14;

	int test_list[] = {2, 10, 19, 30, 42, 44, 57};
	int size_of_test_list = sizeof(test_list)/sizeof(test_list[0]);

	for(int i=0; i<size_of_test_list; i++){
		value = test_list[i];

		int result = binary_search(list, size_of_list, value);

		if(result >= 0)
			printf("The index of %d is %d.\n", value, result);
		else if(result==-1)
			printf("%d is not found.\n", value);
	}
	return 0;
}