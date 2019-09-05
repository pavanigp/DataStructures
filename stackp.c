#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>


struct stack
{
int data;
struct stack *link;
};

typedef struct stack sn;


void display(sn **q)
{
sn *temp;
temp=*q;
printf("Stack elements are::\n");
while(temp!=NULL){
	printf("%d\n",temp->data);
	temp=temp->link;}
printf("\n");
}

void push(sn **q,int n)
{
sn *temp;
temp=*q;
temp=(sn*)malloc(sizeof(sn));
temp->data=n;
temp->link=*q;
*q=temp;
}

void pop(sn **q)
{
sn *temp;
temp=*q;
printf("\n\n\n");
if(temp==NULL)
	printf("Stack is empty\n");
else
{
*q=temp->link;
free(temp);
temp=*q;
}

}






int main()
{
int ch,data;
sn *p=NULL;
while(1)
{
printf("Select option:::\n");
printf("1.push\n2.pop\n3.display\n4.exit\n\n");
scanf("%d",&ch);

	switch (ch)
	{
	case 1:
		printf("\nEnter data to push::\n");
		scanf("%d",&data);
		printf("\n\n");
		push(&p,data);
		break;
	case 2:
		pop(&p);
		break; 
	case 3:
		display(&p);
		break;
	case 4:
		exit(1);
		break;
	default:
		printf("enter digits in given options::::");
		break;
        
	}
}
return 0;
}





/*
pavani@TSHYD-033:~/Desktop$ gcc stackp.c 
pavani@TSHYD-033:~/Desktop$ ./a.out 
Select option:::
1.push
2.pop
3.display
4.exit

1

Enter data to push::
23


Select option:::
1.push
2.pop
3.display
4.exit

1

Enter data to push::
34


Select option:::
1.push
2.pop
3.display
4.exit

2



Select option:::
1.push
2.pop
3.display
4.exit

3
Stack elements are::
23

Select option:::
1.push
2.pop
3.display
4.exit

1

Enter data to push::
23


Select option:::
1.push
2.pop
3.display
4.exit

1

Enter data to push::
2323


Select option:::
1.push
2.pop
3.display
4.exit

2



Select option:::
1.push
2.pop
3.display
4.exit

3
Stack elements are::
23
23

Select option:::
1.push
2.pop
3.display
4.exit

3
Stack elements are::
23
23

Select option:::
1.push
2.pop
3.display
4.exit

1

Enter data to push::
12


Select option:::
1.push
2.pop
3.display
4.exit

3
Stack elements are::
12
23
23

Select option:::
1.push
2.pop
3.display
4.exit

4


*/

