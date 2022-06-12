# include <stdio.h> 
# define MAXLEN 10

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

int GetTop_sq(SqStack *s,elementtype *x)    //ȡջ��Ԫ�� 
{
    if(s->top==-1)
        return(0);  /*ջ�շ���0*/
    else
    {
        *x=s->element[s->top];
        return(1);
    }
}

int Pop_sq(SqStack *s,elementtype *x)      //��ջ���� 
{
    if(s->top==-1)
        return(0);                          /*ջ�շ���0*/
    *x=s->element[s->top];
    s->top--;
    return(1);
}

int Empty_sq(SqStack *s)       //�ж��Ƿ��ջ
{
    return(s->top==-1);        //true��ʾ�� 
}

void print(SqStack s)
{
 int i;
 if(s.top!=-1)
 {
  printf("\n\nջ������Ԫ���ǣ�");
  for(i=s.top;i>=0;i--)             //���Ե������˳�� 
     printf(" %d",s.element[i]); 
 }
 else  printf("\n\n ջ�����!\n"); 
 printf("\n"); 
}

int main()
{
 SqStack stack;      //����ָ�룬ע��������ú���ʱ�Ĳ���д�� 
 int i,n,m;
 elementtype y;
 elementtype z;
 stack=InitStack_sq();               //������ջ
 printf("\n �ѽ���һ����ջ��\n");
 
 printf("\n��Ҫ��ջ�����ݸ���(���ô���%d) ��",MAXLEN);      
 scanf("%d",&n);
 printf("\n���������ݣ�");          //������ջ 
 for(i=1;i<=n;i++)
 {
  scanf("%d",&y);
  Push_sq(&stack,y);
 }
  
 print(stack);               //���ջ��Ԫ��
 
 GetTop_sq(&stack,&z);     //ȡջ��Ԫ�أ��͵�z
 printf("\nջ������Ϊ��%d\n",z); 
 
 printf("\n��Ҫ��ջ�����ݸ���(���ô���%d) ��",n);     //���ݳ�ջ 
 scanf("%d",&m);
 printf("\n��ջ������Ϊ��"); 
 for(i=1;i<=m;i++)
 {
    Pop_sq(&stack,&z);
    printf("  %d",z);
    }
   print(stack);      
  
 } 
