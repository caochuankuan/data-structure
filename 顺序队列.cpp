#include<stdio.h>
#define N 30
typedef struct{
	int data[N];
	int front,rear;
}kuan;

//��ʼ��
kuan csh(){
	kuan s;
	s.front=-1;
	s.rear=-1;
	return s;
};

//���
int rd(kuan *s,int x){
	if(s->rear==N-1)
	printf("error!");
	else
	s->data[++s->rear]=x;
} 

//��ͷԪ��
int dt(kuan *s){
	int x;
	if(s->front==s->rear)
	printf("error!");
	else{
	x=s->data[s->front+1];
	printf("%d",x);
	}
} 

//���
int sc(kuan *s){
	if(s->front==s->rear)
	printf("error!");
	else{
		printf("\n�����е�Ԫ��:");
		for(int i=s->front+1;i<=s->rear;i++)
		printf("%2d",s->data[i]);
	}
} 

//����
kuan cd(kuan *s){
	int x;
	if(s->front==s->rear)
	printf("error!");
	else{
		x=s->data[++s->front];
		printf("%2d",x);
	}
	return *s;
}

int main(){
	kuan a;
	int n,i,x;
	a=csh();
	printf("��������Ҫ��ӵ�Ԫ�ظ���:");
	scanf("%d",&n);
	printf("��������Ҫ��ӵ�Ԫ��:");
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		rd(&a,x);
	}
	printf("��ͷԪ��Ϊ:");
	dt(&a);
	sc(&a);
	printf("\n��������Ҫ���ӵ�Ԫ�ظ���:");
	scanf("%d",&n);
	printf("����Ԫ��Ϊ:");
	for(i=1;i<=n;i++)
	cd(&a);
	sc(&a);
	return 0;
}
