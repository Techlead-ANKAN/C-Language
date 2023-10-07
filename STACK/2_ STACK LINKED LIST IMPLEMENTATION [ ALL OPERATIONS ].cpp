# include <stdio.h>
# include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

node *top = NULL;


int push(int data)
{
		struct node *newnode;
		newnode = (struct node*)malloc(sizeof(struct node));
		newnode -> data = data;
		newnode -> next = top;
		top = newnode;
		printf("(%d) --> Pushed\n", newnode -> data);
		
}

int pop()
{
	if (top == NULL)
	{
		printf("Empty Stack!!");
		return -1;
	}
	else
	{
		struct node *temp = top;
		int data = top -> data;
		top = top -> next;
		free(temp);
		printf("(%d) --> Popped\n", data);
	}
}

int Top()
{
	printf("\nTop Element --> (%d)\n", top -> data);
}


int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	
	pop();
	
	Top();
	
	printf("\nSTACK: \n");
	while(top -> data != NULL)
	{
		printf("| %d |\n", top -> data);
		top = top -> next;
	}
}
