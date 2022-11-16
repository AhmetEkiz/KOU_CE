/** @file 2_linked_list_insert_with_bug.c
 *  @brief linked list data inserting function with bug
 *
 *  The code was intentionally left with the bug.
 *  In insert_data function return second-to-last node of the linked list.
 *
 *  @author Ahmet Ekiz (ahmetekiz)
 *  @bug in insert_data function return second-to-last node of the linked list.
 */

#include <stdio.h>
#include <stdlib.h>   // for sizeof etc.


struct node{
	int data;
	struct node *next;
};


/** @brief print the linked list that build with struct node
 *  @param r a struct node that root node of linked list
 *  @return void.
 */
void print_linked_list(struct node* r){
	struct node* iter = r;

	if(r==NULL){
		printf("linked list is empty\n");
	}

	while(iter!=NULL){
		printf("%d ", iter->data);
		iter = iter->next;
	}
}

/** @brief insert a new node to the end of the linked list
 *  @param r a struct node that root node of linked list
 *  @param data integer value to insert linked list
 *  @return struct node pointer.
 */
struct node* insert_node(struct node *r, int data){

	// if root is empty
	if(r==NULL){
		r = (struct node*)malloc(sizeof(struct node));
		r->data = data;
		r->next = NULL;
		return r;
	}

	while(r->next!=NULL){
		r = r->next;
	}

	r->next = (struct node*)malloc(sizeof(struct node));
	r->next->data = data;
	r->next->next = NULL;

	return r;
}


int main(){

	struct node* root=NULL;
	print_linked_list(root);

	for(int i=1; i<6; i++){
		root = insert_node(root, i*10);
		print_linked_list(root);
		printf("\n");
	}	

	return 0;
}
