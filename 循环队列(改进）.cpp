//ͨ������һ����ʶ�����ж϶�����գ���������һ��Ԫ��
//����ͨ��01�жϣ�Ҳ����ͳ�Ƹ����жϡ� 
#include <stdio.h> 
#define MAXLEN 10
typedef int elementtype;
typedef struct                        //����������ݽṹ 
{
	elementtype data[MAXLEN];
	int front,rear,sign;
}CQueue;

CQueue InitCQueue()               //�����ն��� 
{
	CQueue cq;
	cq.front=0;
	cq.rear=0;
	cq.sign=0;
	printf("�ѽ�������,���ɴ洢 %d �����ݣ�\n",MAXLEN);
	return (cq);
}

int EnCqueue(CQueue *cq,elementtype x)     //������Ӻ��� 
{
	if(cq->rear==cq->front&&cq->sign==MAXLEN+1)  printf("\n����������\n");
	else 
	{
		cq->data[cq->rear]=x;
		cq->rear=(cq->rear+1)%MAXLEN;	
		cq->sign++;	
	}	
}

int DelCqueue(CQueue *cq)                     //���ݳ��Ӻ��� 
{
	elementtype x;
    if(cq->rear==cq->front&&cq->sign==0)
       printf("\n����Ϊ�գ�\n");                          /*ѭ�����п�*/
    else
    {
        x=cq->data[cq->front];
		cq->front=(cq->front+1)%MAXLEN;				        
        printf("%2d",x); 
        cq->sign--;
    }
}

void print(CQueue cq)                //����������� 
{
	int i;
	if(cq.rear==cq.front&&cq.sign==0) printf("����Ϊ�գ�");
	else
	{
		printf("\n\n��������Ϊ��");
		i=cq.front;
		do
		{
			printf("%2d",cq.data[i]);
			i=(i+1)%MAXLEN;			
		}while(i!=cq.rear&&cq.sign!=0);
	}
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
