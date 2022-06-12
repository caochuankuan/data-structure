//通过加入一个标识符，判断队满或空，不用牺牲一个元素
//可以通过01判断，也可以统计个数判断。 
#include <stdio.h> 
#define MAXLEN 10
typedef int elementtype;
typedef struct                        //定义队列数据结构 
{
	elementtype data[MAXLEN];
	int front,rear,sign;
}CQueue;

CQueue InitCQueue()               //建立空队列 
{
	CQueue cq;
	cq.front=0;
	cq.rear=0;
	cq.sign=0;
	printf("已建立队列,最多可存储 %d 个数据！\n",MAXLEN);
	return (cq);
}

int EnCqueue(CQueue *cq,elementtype x)     //数据入队函数 
{
	if(cq->rear==cq->front&&cq->sign==MAXLEN+1)  printf("\n队列已满！\n");
	else 
	{
		cq->data[cq->rear]=x;
		cq->rear=(cq->rear+1)%MAXLEN;	
		cq->sign++;	
	}	
}

int DelCqueue(CQueue *cq)                     //数据出队函数 
{
	elementtype x;
    if(cq->rear==cq->front&&cq->sign==0)
       printf("\n队列为空！\n");                          /*循环队列空*/
    else
    {
        x=cq->data[cq->front];
		cq->front=(cq->front+1)%MAXLEN;				        
        printf("%2d",x); 
        cq->sign--;
    }
}

void print(CQueue cq)                //输出队列数据 
{
	int i;
	if(cq.rear==cq.front&&cq.sign==0) printf("队列为空！");
	else
	{
		printf("\n\n队中数据为：");
		i=cq.front;
		do
		{
			printf("%2d",cq.data[i]);
			i=(i+1)%MAXLEN;			
		}while(i!=cq.rear&&cq.sign!=0);
	}
}

int main()    //建队、入队、再入队、出队，分别测试队空或队满的情况 
{
    CQueue cqueue;
	int i,n,m;
	elementtype x;
	
	cqueue=InitCQueue();     //建立空队列，名为cqueue 
	
	printf("\n请输入需入队的数据个数 ：");	  //数据入队
	scanf("%d",&n);
	printf("\n入队数据为 ：");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		EnCqueue(&cqueue,x);           
	}

	print(cqueue);                   //输出队中数据 
	
	printf("\n\n再次入队的数据个数 ：");	//数据再入队
	scanf("%d",&n);
	printf("\n入队数据为 ：");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		EnCqueue(&cqueue,x);           
	}

	print(cqueue);                   //输出队中数据
	
	printf("\n\n请输入需出队的数据个数 :");        //数据出队 
	scanf("%d",&m);
	printf("\n出队的数据为:");
	for(i=0;i<m;i++)
	   DelCqueue(&cqueue);
	
	print(cqueue);                   //输出队中数据
	
 } 
