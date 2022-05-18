#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
		{
		int data;
		struct node *next;
		};
	struct node *head=NULL;
	struct node *pos=NULL;
	struct node *tail=NULL;
	int ch,entry,ex=1,num=0,x,k=0;
	do{
		printf("\n1. insert\n2. display\n3. count\n4. search\n5. exit");
		printf("\nenter your choice");
		scanf("%d",&ch);
	switch(ch)
		{
		case 1:{
			printf("enter data");
			scanf("%d",&entry);
			if (head==NULL)
				{
				head=(struct node*)malloc(sizeof(struct node));
				head->data=entry;
				pos=head;
				tail=head;
				}
			else
				{
				tail->next=(struct node*)malloc(sizeof(struct node));
				tail=tail->next;
				tail->data=entry;
				}
			break;}
		case 2:{
			pos=head;
			printf("\nelements are:");
			while(pos!=NULL)
				{
				printf("\t%d",pos->data);
				pos=pos->next;
				}
			break;
			}
		case 3:{
			pos=head;
			while(pos!=NULL)
				{
				num++;
				pos=pos->next;
				}
			printf("number of elements is %d",num);
			break;
			}
		case 4:
			{
			 printf("enter the element to be searched");
			 scanf("%d",&x);
			 pos=head;
			 num=1;
			 while(pos!=NULL)
			 	{
			 	if(x==pos->data)
			 		{
			 		k++;
			 		printf("element found at position %d",num);
			 		}
			 	pos=pos->next;
			 	num++;
			 	}
			 if(k==0)
			 	{
			 	printf("element not found");
			 	}
			 break;
			 }
		case 5:{
			printf("\ngoodbye");
			ex=0;
			}
		}
		}while(ex==1);
}
