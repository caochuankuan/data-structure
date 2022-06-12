#include<stdio.h>
#include<malloc.h>
#define N 30

typedef struct duilie{
	int data;
	struct duilie *next;
}duilie1;

typedef struct{
	duilie1 *h,*r;
}duilie2;

duilie2 *chushihua(){
	duilie1 *Q;
	duilie2 *q;
	Q=(duilie1 *)malloc(sizeof(duilie1));
	q=(duilie2 *)malloc(sizeof(duilie2));
	q->h=Q;
	q->r=Q;
	printf("�Ѵ����ն��У�\n");
	return q;
}

int pankong(duilie2 *q){
	if(q->h==q->r)
	return 1;
	else
	return 0;
}

void rudui(duilie2 *S,int elem){
	duilie1 *s;
	s=(duilie1 *)malloc(sizeof(duilie1));
	s->data=elem;
	s->next=NULL;
	S->r->next=s;
	S->r=s;
}

int chudui(duilie2 *S){
	duilie1 *s;
	int x;
	if(pankong(S))
	printf("����Ϊ�գ����ܳ���\n");
	else{
		s=S->h->next;
		x=s->data;
		S->h->next=s->next;
		if(s->next==NULL)
		S->r=S->h;
		free(s);
		return x;
	}
}

void shuchu(duilie2 *S){
	duilie1 *s;
	s=S->h->next;
	if(s==NULL)
	printf("����Ϊ��\n");
	else{
		while(s!=NULL){
		printf("%2d",s->data);
		s=s->next;
		}
	}
}

void freeduilie(duilie2 *S){
	duilie1 *p=S->h,*q;
	do{
		p=q->next;
		free(q);
		q=p;
	}while(p!=NULL);
}

int main(){
	duilie1 *s;
	duilie2 *S;
	int i,n,x;
	S=chushihua();
	printf("��������Ҫ��ӵ����ݸ���:");
	scanf("%d",&n);
	printf("��������Ҫ��ӵ�����:");
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		rudui(S,x);
	}
	printf("����Ԫ��:"); 
	shuchu(S);
	printf("\n��������Ҫ���ӵ����ݸ���:");
	scanf("%d",&n);
	printf("����Ԫ��Ϊ:");
	for(i=1;i<=n;i++){
		printf("%2d",chudui(S));
	}
	printf("\n"); 
	printf("����Ԫ��Ϊ:");
	shuchu(S);
	return 0;
}
