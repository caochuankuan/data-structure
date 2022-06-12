# include <stdio.h> 
# include <malloc.h> 

typedef int DataType;             //��������ı�洢���ݵ����� 

typedef struct stacknode               /*������ջ���*/
{
    DataType data;		          
    struct stacknode *next;              /*ָ������,�����һ������ַ*/
}LinkStack;

LinkStack *InitStack()    //��ʼ����ջ����������ջ��S�ĵ�ַ 
{
   LinkStack *S;         //SΪջ����� 
   S=NULL;
   return S;
}

LinkStack *Push(LinkStack *S)
{
	int n; 
	DataType x;
	LinkStack *p;                //PΪ��ջ�Ľ��
	printf("\n���������ջ�����ݸ��� n ��");
	scanf("%d",&n);
	printf("\n�������ջ�����ݣ�");
	while(n>0)
	{
	  scanf("%d",&x);	 
	  p=(LinkStack *)malloc(sizeof(LinkStack));
	  p->data=x;
	  p->next=S;      //���½�����ջ��֮�� 
	  S=p;            //�½���Ϊ�µ�ջ�� 
	  n--;
    }
	return S;
}

int StackEmpty(LinkStack *S)   //�пպ��� 
{
	if(S==NULL)  return 1;
	 else return 0;
}

int GetTop(LinkStack *S)      //ȡջ��Ԫ�� 
{  
   DataType x; 
   if(StackEmpty(S))                  //���ж�ջ�Ƿ�Ϊ�� 
      printf("ջ�գ�"); 
   else  
   	x=S->data;
   printf("\nջ��Ԫ��Ϊ��%d\n",x);	                      
}

LinkStack * Pop(LinkStack *S)    //��ջ����
{
   LinkStack * p; 
   DataType x; 
   int m,i;
   
   if(StackEmpty(S))  printf("ջ��!"); 
   else 
    {
	   printf("\n���������ջ�����ݸ��� m ��");
       scanf("%d",&m);
       printf("\n��ջ������Ϊ��"); 
       for(i=0;i<m;i++)
	  {  x=S->data;
         p=S;         //��ԭջ��������˸�����p 
         S=S->next;   //ջ������ 
         free(p); 
		 printf("%3d",x);  
      }     	
    } 
	return S; 
}

void print(LinkStack *S)  //���ջ
{
  LinkStack * p;
  p=S;
  if(p!=NULL) 
  {
  	printf("\n\n��ջ�е�����Ϊ��");
  	while(p!=NULL)
  	{
  		printf("%3d",p->data);
  		p=p->next;
	  }
   }
   else
    printf("\n\nջ����գ�"); 
    printf("\n");
   
}

void freenode(LinkStack *S)
{
    LinkStack *q=S, *p;
    do
	{ p=q->next;
	  free(q);
	  q=p;
	}while(p!=NULL);
}

int main()
{
	LinkStack *S;       //����ջ�����ΪS 
	S=InitStack();     //��ʼ����ջ 
	S=Push(S);        //������ջ  
	print(S);        //�鿴ջ������Ԫ�� 
	GetTop(S);      //��ȡջ��Ԫ��
	S=Pop(S);          //Ԫ�س�ջ�����س�ջ���ջ��ָ�� 
    print(S);	      //�鿴ջ������Ԫ�أ�ע��S�ѷ����仯�� 
    if(S!=NULL) freenode(S);   //���S�ѿգ������ͷ� 
	
}










