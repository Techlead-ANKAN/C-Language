# include <stdio.h>
# include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *del_first(struct node *head)
{
	if (head==NULL)
	printf("List is Empty");
	else
	{
		struct node *temp;
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
		return head;
	}
}

int main()
{
	struct node *head, *current, *ptr;
	
	head = NULL;
	head = (struct node*)malloc(sizeof(struct node));
	head -> data = 40;
	head -> next = NULL;
	
	current = (struct node*)malloc(sizeof(struct node));
	current -> data = 50; 
	current -> next = NULL;
	head -> next = current;
	
	printf("OLd List: %d %d\n",head -> data, current -> data);
	
	head = del_first(head);
	ptr = head;
	
	while(ptr!=0)
	{
		printf("After Deletion: %d", ptr -> data);
		ptr = ptr->next;
	}
}
