#include<stdio.h>

int stack[6],max,i,top=-1,choice;

void push()
{
int val;
if(top==max-1)
{
	printf("overflow");
}
else
{
	while(top<max-1)
	top=top+1;
	printf("enter the %d index value",top);
	scanf("%d",&val);
	stack[top]=val;
}
printf("\n The elements in stack are.. ");
for(i=top;i>=0;i--)
{
	printf("%d",stack[i]);
}
}

void pop()
{
	int c ;
	if(top==-1)
	{
		printf("underflow");
	}
	else
	{
		printf("enter the number of elements to pop");
		scanf("%d",&c);
		if(c<max)
		{
			printf("\n not enough elements to pop");
		}
		else
		{
			top-=c;
			printf("\n the elements are deleted");
			if(top==-1)
			{
				printf("\n All elements are popped");
			}
			else
			{
				printf("\n the elemets in stack are");

				for(i=top;i>=0;i--)
				{
					printf("%d\n",stack[i]);
				}

			}
		}

	}


    
}

int main()
{
	max=6;
	
		for(i=0;i<max-1;i++)
		{
		scanf("%d", &stack[i]);
		
		}
		
		push(stack[6]);
		pop(stack[6]);
	
}
