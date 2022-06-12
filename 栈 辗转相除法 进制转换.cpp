# include <stdio.h> 
# define MAXLEN 50
	
typedef int elementtype;             //��������ı�洢���ݵ����� 
	
typedef struct                /*ջ��˳��洢�ṹ����*/
	{
	    elementtype element[MAXLEN]; /*���ջԪ�ص�����*/
	    int top;               /*ջָ��*/
	}SqStack;
	
SqStack InitStack_sq()  /*����һ����ջs*/
	{   
	    SqStack s;
	    s.top=-1;                //s.top��s->top������:s.top��ʾSֻ��һ���ṹ�������
	    return(s);               //s->top ��ʾs�Ǹ��ṹ��ָ�������
	}
	
int Push_sq(SqStack *s,elementtype x)       //��ջ���� 
	{
	    if(s->top==MAXLEN-1)
	        return(0);                          /*ջ������0*/
	    s->top++;
	    s->element[s->top]=x;
	    return(1);
	}
	
void print(SqStack s)
	{
	 int i;
	 if(s.top!=-1)
	 {
	  printf("\n��Ӧ�Ķ���������");
	  for(i=s.top;i>=0;i--)             //���Ե������˳�� 
	     printf("%d",s.element[i]); 
	 }
	 else  printf("\n�������������һ���Ǹ�ʮ����������"); 
	 printf("\n"); 
	}
	
int main()
	{
	 SqStack stack;      //����ָ�룬ע��������ú���ʱ�Ĳ���д�� 
	 int m,n;
	 stack=InitStack_sq();               //������ջ
	 
	 printf("��������Ҫת����ʮ��������");      
	 scanf("%d",&n);          //������ջ 
	 if(n>0)
	 {
	 while(n!=0)
	 {
		m=n%2;
	    Push_sq(&stack,m);
	    n=n/2;
	 }
	 }		
	 else if(n==0)
	 {
	 	stack.top=0;
	 	stack.element[stack.top]=0;
	 }
	 
     print(stack);      
	} 
	 

