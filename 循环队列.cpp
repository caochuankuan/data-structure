#include <stdio.h> 
#define MAXLEN 10
typedef int elementtype;
typedef struct                        //����������ݽṹ 
{
	elementtype data[MAXLEN];
	int front,rear;
}CQueue;

CQueue InitCQueue()               //�����ն��� 
{
	CQueue cq;
	cq.front=0;
	cq.rear=0;
	printf("�ѽ�������,���ɴ洢 %d �����ݣ�\n",MAXLEN-1);
	return (cq);
}

int EnCqueue(CQueue *cq,elementtype x)     //������Ӻ��� 
{
	if((cq->rear+1)%MAXLEN==cq->front)  printf("\n����������\n");
	else 
	{
		cq->data[cq->rear]=x;
		cq->rear=(cq->rear+1)%MAXLEN;		
	}	
}

int DelCqueue(CQueue *cq)                     //���ݳ��Ӻ��� 
{
	elementtype x;
    if(cq->rear==cq->front)
       printf("\n����Ϊ�գ�\n");                          /*ѭ�����п�*/
    else
    {
        x=cq->data[cq->front];
		cq->front=(cq->front+1)%MAXLEN;				        
        printf("%2d",x); 
    }
}

void print(CQueue cq)                //����������� 
{
	int i;
	if(cq.front!=cq.rear)
	{
		printf("\n\n��������Ϊ��");
		i=cq.front;
		do
		{
			printf("%2d",cq.data[i]);
			i=(i+1)%MAXLEN;			
		}while(i!=cq.rear);
	}
	else  printf("\n\n����Ϊ�գ�");
}

int main()    //���ӡ���ӡ�����ӡ����ӣ��ֱ���Զӿջ��������� 
{
    CQueue cqueue;
	int i,n,m;
	elementtype x;
	
	cqueue=InitCQueue();     //�����ն��У���Ϊcqueue 
	
	printf("\n����������ӵ����ݸ��� ��");	  //�������
	scanf("%d",&n);
	printf("\n�������Ϊ ��");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		EnCqueue(&cqueue,x);           
	}

	print(cqueue);                   //����������� 
	
	printf("\n\n�ٴ���ӵ����ݸ��� ��");	//���������
	scanf("%d",&n);
	printf("\n�������Ϊ ��");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		EnCqueue(&cqueue,x);           
	}

	print(cqueue);                   //�����������
	
	printf("\n\n����������ӵ����ݸ��� :");        //���ݳ��� 
	scanf("%d",&m);
	printf("\n���ӵ�����Ϊ:");
	for(i=0;i<m;i++)
	   DelCqueue(&cqueue);
	
	print(cqueue);                   //�����������
	
 } 
