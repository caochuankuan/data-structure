#include<stdio.h>
#include<malloc.h>
typedef struct linknode{
	int data;
	struct linknode *next;
}LinkList;

int CreateListH(LinkList *head,int n){//���������� 
	int i;
	LinkList *s,*last;
	last=head; 
	printf("\n����������:");
	for(i=0;i<n;i++){
		s=(LinkList *)malloc(sizeof(LinkList));                 //���붯̬�ռ���䡣malloc�ڴ����;�����ڴ�;��̬����;�洢������;�����  sizeof���ֽ��������;�����;�ؼ���;������;C���� 
		scanf("%d",&s->data);
		s->next=last->next;                                     //��ͷָ����ָ�����һ�����ĵ�ַ�������´�������next 
		last->next=s; 
		last=s;                                          //���´����Ľ��ĵ�ַ����ͷָ�����һ�����
	}
	printf("\n����������:");
	LinkList *tem=head;
	while(tem->next!=NULL){
		tem=tem->next;
		printf("%d ",tem->data);
	} 
	printf("\n");
} 

void freenode(LinkList *head){
	LinkList *q=head,*p;
	do{
		p=q->next;
		free(q);
		q=p;
	}while(p!=NULL);
}

int main(){
	int i,n;
	LinkList *head;
	head=(LinkList *)malloc(sizeof(LinkList));
	head->next=NULL;
	
	printf("���ݵĸ���:");
	scanf("%d",&n);
	
	CreateListH(head,n);
	freenode(head);
}
