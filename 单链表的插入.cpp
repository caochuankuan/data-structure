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

int CreateListL(LinkList *head,int n)
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

int InsList(LinkList *head,int i,int x)
{
	int j=0;
	LinkList *p,*s;
	p=head;
	while(p->next!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p!=NULL)
	{
		s=(LinkList *)malloc(sizeof(LinkList));	
		s->data=x;
		s->next=p->next;//重点 
		p->next=s;//重点 
		printf("\n新的链表是:"); 
	}
	
	LinkList *tem=head;
	while(tem->next!=NULL)
	{
		tem=tem->next;
		printf("%d  ",tem->data);
	} 
}

int main()
{
	int n,m,x;
	LinkList *head;
	head=(LinkList *)malloc(sizeof(LinkList));
	head->next=NULL;
	
	printf("请输入数据的个数：");
	scanf("%d",&n);
	CreateListL(head,n);
	 
	printf("\n\n请输入需要插入的数据：");
	scanf("%d",&x);
	printf("\n请输入需要插入数据的位置:");
	scanf("%d",&m);
	
	InsList(head,m,x);
	
	freenode(head);
}
