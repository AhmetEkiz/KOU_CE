#include <stdio.h>
#include <stdlib.h>

// we can give a name to a struct with typedef
typedef struct n{   //struct defined by "node" name
	int data;
	struct n *next;
}node;


int main(){

	node *root = NULL;  // define NULL node struct pointer

	// root-first node
	root = (node *)malloc(sizeof(node)); //allocate memory with malloc
	root->data = 10;  // place value in node

	//second node
	root->next = (node *)malloc(sizeof(node)); 
	root->next->data = 20;

	//third node
	root->next->next = (node *)malloc(sizeof(node));
	// third node pointing null, so does not link another node
	root->next->next = NULL;  

	node *iter = root;  
	while(iter != NULL){
		printf(" %d ", iter->data);
		iter = iter->next;
	}

}	
