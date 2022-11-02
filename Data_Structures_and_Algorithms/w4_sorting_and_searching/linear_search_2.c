#include <stdio.h>


int linear_search(int list[], int size_of_list, int value){

	for(int i=0; i<size_of_list; i++){
		if (list[i] == value)
			return i;
	};
	return -1;
}


int main(){
	
	int list[] = {10, 14, 19, 26, 27, 31, 33};
	int size_of_list = sizeof(list)/sizeof(list[0]);

	int value=27;

	int result = linear_search(list, size_of_list, value);

	(result != -1) ? printf("Index of value is %d", result) : printf("Value is not found"); 

	return 0;
}
