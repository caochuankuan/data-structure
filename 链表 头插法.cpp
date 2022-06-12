#include<stdio.h>
#include<malloc.h>
typedef struct linknode{
	int data;
	struct linknode *next;
}LinkList;

int CreateListH(LinkList *head,int n){//空链表，长度 
	int i;
	LinkList *s;
	printf("\n请输入数据:");
	for(i=0;i<n;i++){
		s=(LinkList *)malloc(sizeof(LinkList));                 //申请动态空间分配。malloc内存分配;分配内存;动态分配;存储器分配;分配的  sizeof求字节数运算符;运算符;关键字;类型名;C语言 
		scanf("%d",&s->data);
		s->next=head->next;                                     //将头指针所指向的下一个结点的地址，赋给新创建结点的next 
		head->next=s;                                           //将新创建的结点的地址赋给头指针的下一个结点
	}
	printf("\n建立的链表:");
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
	
	printf("数据的个数:");
	scanf("%d",&n);
	
	CreateListH(head,n);
	freenode(head);
}
