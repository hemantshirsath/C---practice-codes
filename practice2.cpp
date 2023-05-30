//implementation of doubly linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node {
	struct node *prev;
	struct node *next;
	int data;
};

struct node *head;
void insert_begin();
void insert_specified();
void insert_last();
void delete_begin();
void delete_specified();
void delete_last();
void display();
void search();

int main(){
	int choice = 0;
	do{
		printf("\n*****************Main Menu******************");
		printf("\nChoose one option from the following list.....");
		printf("\n=======================================================");
		printf("\n 1.Insert in beginning.");
		printf("\n 2.Insert at any random location.");
		printf("\n 3.Insert at last.");
		printf("\n 4.Delete from beginning.");
		printf("\n 5.Delete the node after the given data.");
		printf("\n 6.Delete from last.");
		printf("\n 7.Search");
		printf("\n 8.Display");
		printf("\n 9.Exit");
		
		printf("\nEnter your choice:- \n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				insert_begin();
				break;
			case 2:
				insert_specified();
				break;
			case 3:
				insert_last();
				break;
			case 4:
				delete_begin();
				break;
			case 5:
				delete_specified();
				break;
			case 6:
				delete_last();
				break;
			case 7:
				search();
				break;
			case 8:
				display();
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("Enter valid choice, sir..");
				
		}
	}while(choice != 9);
    return 0;
	
}

void insert_begin(){
	struct node *ptr;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));//allocating memory dyamically
	
	if(ptr == NULL){
		printf("\n Overflow !");
	}
	else{
		printf("\n Enter Iterm value:- ");
		scanf("%d", &item);
		
		if(head == NULL){
			ptr->next = NULL;
			ptr->prev = NULL;	
			ptr->data = item;
			head = ptr;
		}
		else{
			ptr->data = item;
			ptr->prev = NULL;
			ptr->next = head;
			head->prev = ptr;
			head = ptr;
		}
		printf("\n Node Inserted.\n");
	}
}

void insert_specified(){
	struct node *ptr,*temp;
	int item, loc;
	ptr = (struct node *)malloc(sizeof(struct node));
	
	if(ptr == NULL){
		printf("\n Overflow !");
	}
	else{
		temp = head;
		printf("\n Enter the location:- \n");
		scanf("%d", &loc);
		
		for(int i=0;i<loc;i++){
			temp = temp->next;
			if(temp == NULL){
				printf("\n There is less than %d elements", loc);
				return;
			}
		}
		printf("\nEnter the value:- \n");
		scanf("%d", &item);
		ptr->data = item;
		ptr->next = temp->next;
		ptr->prev = temp;
		temp->next = ptr;
		temp->next->prev = ptr;
		printf("\n Node Inserted.\n");
	}
}

void insert_last(){
	struct node *ptr, *temp;
	int item;
	ptr = (struct node *)malloc(sizeof(struct node));
	
	if(ptr == NULL){
		printf("\n Overflow !");
	}
	else{
		printf("\n Enter the value:- \n");
		scanf("%d",&item);
		ptr->data = item;
		
		if(head == NULL){
			ptr->next = NULL;
			ptr->prev = NULL;
			head = ptr;
		}
		else{
			temp = head;
			while((temp->next) != NULL){
				temp = temp->next;//searching the last node of the existing list.
			}
			temp->data = item;
			ptr->prev = temp;
			ptr->next = NULL;
		}
	}
	printf("\n Node Inserted.\n");
}

void delete_begin(){
	struct node *ptr;
	
	if(head == NULL){
		printf("\n Underflow\n");
	}
	else if(head->next == NULL){
		head = NULL;
		free(head);
		printf("\n Node deleted.\n");
	}
	else{
		ptr = head;
		head = head->next;
		head->prev = NULL;
		free(ptr);
		printf("\n Node deleted.\n");
	}
}

void delete_specified(){
	struct node *ptr, *temp;
	int val;
	printf("\n Enter the data after which node is to be deleted:-  \n");
	scanf("%d", &val);
	ptr = head;
	while(ptr->data != val){
		ptr = ptr->next;
	}
	if(ptr->next == NULL){
		printf("\n Can't delete.\n");
	}
	else if(ptr->next->next == NULL){
		ptr->next = NULL;
	}
	else{
		temp = ptr->next;
		ptr->next = temp->next;
		temp->next->prev = ptr;
		free(temp);
		printf("\n Node deleted.\n");
	}
}

void delete_last(){
	struct node *ptr;
	
	if(head == NULL){
		printf("\n Underflow\n");
	}
	else if(head->next == NULL){
		head = NULL;
		free(head);
		printf("\n Node deleted.\n");
	}
	else{
		ptr = head;
		if(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->prev->next = NULL;
		free(ptr);
		printf("\n Node deleted.\n");
	}
}

void display(){
	struct node *ptr;
	printf("\n Printing Values:- \n");
	ptr = head;
	while(ptr != NULL){
		printf("%d \n", ptr->data);
		ptr = ptr->next;
	}
}

void search(){
	struct node *ptr;
	int item,i =0, flag;
	ptr = head;
	if(ptr == NULL){
		printf("\n Empty list. \n");
	}
	else{
		printf("\n Enter item you want to search:- \n");
		scanf("%d", &item);
		while(ptr != NULL){
			if(ptr->data == item){
				printf("\n item found at location %d", i+1);
				flag = 0;
				break;
			}
			else{
				flag = 1;
			}
			i++;
			ptr = ptr->next;
		}
		if(flag ==1){
			printf("\n Item not found \n");
		}
	}
}


//completed
