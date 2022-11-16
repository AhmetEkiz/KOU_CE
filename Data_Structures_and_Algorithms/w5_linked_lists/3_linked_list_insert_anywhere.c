#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int data;
	struct n *next;
}node;

/** @brief insert new data as a new node
 *  to the end of the linked list 
 *  @param r Root node of a linked list
 *  @param data An integer value as a new data
 *  @return Struct node.
 */
node* insert_end(node *r, int data){
	
	if(r==NULL){
		r=(node*)malloc(sizeof(node));
		r->data=data;
		r->next=NULL;
		return r;
	}

	//if list isn't empty
	node *iter = r;
	while(iter->next!=NULL){
		iter = iter->next;
	}
	iter->next = (node*)malloc(sizeof(node));
	iter->next->data=data;
	iter->next->next=NULL;
	return r;
}


/** @brief insert new data as a new node
 *  to the head of the linked list 
 *  @param r Root node of a linked list
 *  @param data An integer value as a new data
 *  @return Struct node.
 */
node *insert_start(node *r, int data){
	if(r==NULL){
		r =(node*)malloc(sizeof(node));
		r->data = data;
		r->next = NULL;
		return r;
	}

	node *temp = (node*)malloc(sizeof(node));
	temp->data=data;
	temp->next=r;
	return temp;
}

/** @brief insert new data as a new node
 *  to the right of the node that has given
 *  @param node_x Given node that struct node
 *  @param data An integer value as a new data
 *  @return Void.
 */
void insert_right_node(node *node_x, int data){
	if(node_x==NULL)
		printf("node can't be NULL");
	node *new_node = (node*)malloc(sizeof(node));
	new_node->next = node_x->next;
	node_x->next = new_node;
	new_node->data = data;
}


/** @brief remove node of the given data
 *  @param r Root node of a linked list that at least has two node
 *  @param data An integer value that wants to remove
 *  @return Void.
 */
node* remove_node(node *r, int data){

	node *node_to_delete;
	node *iter=r;

	// if root data is wanted to delete
	if(iter->data == data){
		// if node is found
		node_to_delete = iter;
		iter = node_to_delete->next;
		free(node_to_delete);
		return iter;
	}

	// if one of the values is not in the 
	// head of the list wants to be deleted
	while(iter->next->data!=data && iter->next!=NULL){
		iter=iter->next;
	}

	//if data is not in the linked list
	if (iter->next==NULL){
		printf("Data isn't found");
		return r;
	}

	// if node is found
	node_to_delete = iter->next;
	iter->next = node_to_delete->next;
	free(node_to_delete);
	return r;
}


void print_linked_list(node *r){
	node *iter = r;

	if(r == NULL){
		printf("linked list is empty");
	}

	while(iter!=NULL){
		printf("%d ", iter->data);
		iter = iter->next;
	}
	printf("\n");
}

int main(){
	
	node *root = NULL;
	print_linked_list(root);

	root = insert_end(root, 25);
	print_linked_list(root);

	root = insert_end(root, 35);
	print_linked_list(root);

	root = insert_start(root, 55);
	print_linked_list(root);

	node *node_x = root->next;  // for now, this is second node which has 25 value
	insert_right_node(node_x, 28);  // it must be 55-25-28-35
	printf("it must be 55-25-28-35:  ");
	print_linked_list(root);

	root = remove_node(root, 25);
	print_linked_list(root);

	root = remove_node(root, 35);
	print_linked_list(root);

	root = remove_node(root, 55);
	print_linked_list(root);

	root = remove_node(root, 28);
	print_linked_list(root);

	return 0;
}