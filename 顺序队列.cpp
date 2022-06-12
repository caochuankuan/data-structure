#include<stdio.h>
#define N 30
typedef struct{
	int data[N];
	int front,rear;
}kuan;

//初始化
kuan csh(){
	kuan s;
	s.front=-1;
	s.rear=-1;
	return s;
};

//入队
int rd(kuan *s,int x){
	if(s->rear==N-1)
	printf("error!");
	else
	s->data[++s->rear]=x;
} 

//对头元素
int dt(kuan *s){
	int x;
	if(s->front==s->rear)
	printf("error!");
	else{
	x=s->data[s->front+1];
	printf("%d",x);
	}
} 

//输出
int sc(kuan *s){
	if(s->front==s->rear)
	printf("error!");
	else{
		printf("\n队列中的元素:");
		for(int i=s->front+1;i<=s->rear;i++)
		printf("%2d",s->data[i]);
	}
} 

//出队
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
	printf("请输入需要入队的元素个数:");
	scanf("%d",&n);
	printf("请输入需要入队的元素:");
	for(i=1;i<=n;i++){
		scanf("%d",&x);
		rd(&a,x);
	}
	printf("对头元素为:");
	dt(&a);
	sc(&a);
	printf("\n请输入需要出队的元素个数:");
	scanf("%d",&n);
	printf("出队元素为:");
	for(i=1;i<=n;i++)
	cd(&a);
	sc(&a);
	return 0;
}
