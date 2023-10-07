# include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node  *next;
};

int main()
{
	struct node  *head,  *current;
	
	// Head Node
	head = NULL;
	head = (struct node*)malloc (sizeof(struct node));
	head -> data = 40;   
	head -> next = NULL;
	printf("%d ", head -> data);
	
	//Current Node (2nd Node)
	current = NULL;
	current = (struct node*)malloc (sizeof(struct node));
	current -> data = 80;
	head -> next = current;
	printf("%d", current -> data);
}
