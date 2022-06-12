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
	printf("\n���������ݣ�");
	for(i=0;i<n;i++) 
	{
		s=(LinkList *)malloc(sizeof(LinkList));
		scanf("%d",&s->data);
		s->next=last->next;
		last->next=s;
		last=s;
	}
	printf("\n�����������ǣ�");
	
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
	printf("\n\nɾ����ϣ�"); 
}

int main()
{
	int n,m;
	LinkList *head;
	head=(LinkList *)malloc(sizeof(LinkList));
	head->next=NULL;
	
	printf("���������ݵĸ�����");
	scanf("%d",&n);
	CreateListL(head,n);
	 
	printf("\nɾ����������");
	del(head);
	
	freenode(head);
}
