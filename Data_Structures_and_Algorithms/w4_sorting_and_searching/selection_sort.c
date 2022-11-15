#include <stdio.h>
#include "../utils/utils.h"


void selection_sort(int list[], int size){
	/* selection sort on c array
	*/
	int least_index;
	for(int i=0; i<size; i++){
		least_index = i;
		for(int j=i+1; j<size; j++){    
			if(list[least_index]>list[j])
				least_index = j;
		}
		exchange(&list[i], &list[least_index]);
	}

}

int main(){

	int list[] = {9, 7, 6, 15, 16, 5, 10, 11};
	int size = sizeof(list)/sizeof(list[0]);

	printf("Before sorting\n");
	print_list(list, size);
	selection_sort(list, size);
	printf("\nAfter sorting\n");
	print_list(list, size);


	return 0;
}