#include <stdio.h>
#include "utils.h"

void print_list(int list[], int size){
	/*it prints c array*/

	for(int i=0; i<size; i++){
		printf("%d ",list[i]);
	};
}

void exchange(int *x, int *y){
	// takes pointers and exchange variables
	int temp = *x; 
	*x = *y;
	*y = temp;
}