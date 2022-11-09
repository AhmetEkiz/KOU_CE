// buble sort algorithm in c
#include <stdio.h>

void buble_sort(int list[], int size){
/* sort list */
	int temp;

	for(int i=0; i<size-1; i++){
		for(int s=0; s<size-1-i; s++){

			// exchange variables
			if(list[s]>list[s+1]){
				temp = list[s+1];
				list[s+1] = list[s];
				list[s] = temp;
			}
		}
	}
}

void print_list(int list[], int size){
	//prints list
	for(int i=0; i<size; i++){
		printf("%d ", list[i]);
	}
}

int main(){

	int list[5]={14, 27, 33, 10, 35};

	printf("Before Sorting\n");
	print_list(list, 5);
	buble_sort(list, 5);
	printf("\nAfter Sorting\n");
	print_list(list, 5);


	return 0;
}