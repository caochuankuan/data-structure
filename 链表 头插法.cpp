#include<stdio.h>
#include<malloc.h>
typedef struct linknode{
	int data;
	struct linknode *next;
}LinkList;

int CreateListH(LinkList *head,int n){//���������� 
	int i;
	LinkList *s;
	printf("\n����������:");
	for(i=0;i<n;i++){
		s=(LinkList *)malloc(sizeof(LinkList));                 //���붯̬�ռ���䡣malloc�ڴ����;�����ڴ�;��̬����;�洢������;�����  sizeof���ֽ��������;�����;�ؼ���;������;C���� 
		scanf("%d",&s->data);
		s->next=head->next;                                     //��ͷָ����ָ�����һ�����ĵ�ַ�������´�������next 
		head->next=s;                                           //���´����Ľ��ĵ�ַ����ͷָ�����һ�����
	}
	printf("\n����������:");
	while(s!=NULL){
		printf("%d ",s->data);
		s=s->next;
	} 
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
