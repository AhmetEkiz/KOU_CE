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
	int list_2[] = {12, 14, 67, 26, 27, 2, 33};

	int size_of_list = sizeof(list)/sizeof(list[0]);

	int value;
	int result;

	for(int i=0; i<size_of_list; i++){

		value = list_2[i];

		result = linear_search(list, size_of_list, value);

		if(result >= 0)
			printf("The index of %d is %d\n", value, result);
		else if(result==-1)
			printf("%d is not found.\n", value);
	};

	return 0;
}
