#include<stdio.h>
#include<malloc.h>
typedef struct linknode
{
	int data;
	struct linknode *next;
}LinkList;

void freenode(LinkList *head)
{
	LinkList *q=head,*p;
	do
	{
		p=q->next;
		free(q);
		q=p;
	}while(p!=NULL);
}

void CreateListL(LinkList *head,int n)
{
	int i;
	LinkList *s,*last;
	last=head;
	printf("\n请输入数据：");
	for(i=0;i<n;i++) 
	{
		s=(LinkList *)malloc(sizeof(LinkList));
		scanf("%d",&s->data);
		s->next=last->next;
		last->next=s;
		last=s;
	}
	printf("\n建立的链表是：");
	
	LinkList *tem=head;
	while(tem->next!=NULL)
	{
		tem=tem->next;
		printf("%d  ",tem->data);
	} 
	printf("\n");
}

int del(LinkList* &head)
{
	LinkList *node;
	while(head->next)
	{
		node=head->next;
		free(node);
		head=node;
	}
	free(head);
	printf("\n\n删除完毕！"); 
}

int main()
{
	int n,m;
	LinkList *head;
	head=(LinkList *)malloc(sizeof(LinkList));
	head->next=NULL;
	
	printf("请输入数据的个数：");
	scanf("%d",&n);
	CreateListL(head,n);
	 
	printf("\n删除整个链表");
	del(head);
	
	freenode(head);
}
