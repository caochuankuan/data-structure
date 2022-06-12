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

int del(LinkList *head,int i)
{
	int j=0,x;
	LinkList *p,*s;
	p=head;
	while(p->next!=NULL&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p->next!=NULL&&j==i-1)
	{
		s=p->next;//�ҵ���Ҫɾ���Ľڵ� 
		x=s->data;//������Ҫɾ���ڵ������
		p->next=s->next;//�ص� 
		free(s);//�ͷ� 
		printf("\n�µ�������:"); 
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
	
	printf("���������ݵĸ�����");
	scanf("%d",&n);
	CreateListL(head,n);
	 
	printf("\n\n��Ҫɾ��������λ�ã�");
	scanf("%d",&x);
	
	del(head,x);
	
	freenode(head);
}
