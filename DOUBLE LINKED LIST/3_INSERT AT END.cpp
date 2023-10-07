# include <stdio.h>
# include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
	struct node *prev;
};

int main()
{
	struct node *head, *one, *two, *three, *temp, *newnode;
	head = NULL;
	one = (struct node*)malloc(sizeof(struct node));
	two = (struct node*)malloc(sizeof(struct node));
	three = (struct node*)malloc(sizeof(struct node));
	newnode = (struct node*)malloc(sizeof(struct node));
	
	one -> data = 40;
	two -> data = 50;
	three -> data = 60;
	newnode -> data = 10;
	
	one -> next = two;
	two -> next = three;
	two -> prev = one;
	three -> prev = two;
	three -> next = NULL;
	
	head = one;
	temp = head;
	
	printf("Double Linked List : ");
	while (temp !=0)
	{
		printf("%d ", temp -> data);
		temp = temp -> next;
	} 
		
	three -> prev = two;
	three -> next = newnode;
	newnode -> prev = three;
	newnode -> next = NULL;

	
	head = one;
	temp = head;
	
	printf("\nInserting at end : ");
	
	while(temp != NULL)
	{
		printf("%d ", temp -> data);
		temp = temp -> next;
	}
//	printf("%d ", temp->data);
}


