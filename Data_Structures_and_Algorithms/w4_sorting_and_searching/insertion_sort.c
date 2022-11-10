// insertion sort algorithm in c

#include <stdio.h>
#include "../utils/utils.h"

void insertion_sort(int list[], int size){
	int loc;  //location
	for(int i=0; i < size-1; i++){
		loc = i;
		while(list[loc+1] < list[loc] && loc>-1){
			exchange(&list[loc+1], &list[loc]);
			loc--;
		}
	}
}

int main(){

	int list[] = {9, 7, 6, 15, 16, 5, 10, 11};
	int size = sizeof(list)/sizeof(list[0]);

	printf("Before sorting\n");
	print_list(list, size);
	insertion_sort(list, size);
	printf("\nAfter sorting\n");
	print_list(list, size);

	return 0;
}