# include <stdio.h> 
# define MAXLEN 10

typedef int elementtype;             //方便后续改变存储数据的类型 

typedef struct                /*栈的顺序存储结构定义*/
{
    elementtype element[MAXLEN]; /*存放栈元素的数组*/
    int top;               /*栈指针*/
}SqStack;

SqStack InitStack_sq()  /*建立一个空栈s*/
{   
    SqStack s;
    s.top=-1;                //s.top与s->top的区别:s.top表示S只是一个结构体变量。
    return(s);               //s->top 表示s是个结构体指针变量。
}

int Push_sq(SqStack *s,elementtype x)       //进栈函数 
{
    if(s->top==MAXLEN-1)
        return(0);                          /*栈满返回0*/
    s->top++;
    s->element[s->top]=x;
    return(1);
}

int GetTop_sq(SqStack *s,elementtype *x)    //取栈顶元素 
{
    if(s->top==-1)
        return(0);  /*栈空返回0*/
    else
    {
        *x=s->element[s->top];
        return(1);
    }
}

int Pop_sq(SqStack *s,elementtype *x)      //出栈函数 
{
    if(s->top==-1)
        return(0);                          /*栈空返回0*/
    *x=s->element[s->top];
    s->top--;
    return(1);
}

int Empty_sq(SqStack *s)       //判断是否空栈
{
    return(s->top==-1);        //true表示空 
}

void print(SqStack s)
{
 int i;
 if(s.top!=-1)
 {
  printf("\n\n栈中数据元素是：");
  for(i=s.top;i>=0;i--)             //可以调整输出顺序 
     printf(" %d",s.element[i]); 
 }
 else  printf("\n\n 栈已清空!\n"); 
 printf("\n"); 
}

int main()
{
 SqStack stack;      //不是指针，注意下面调用函数时的参数写法 
 int i,n,m;
 elementtype y;
 elementtype z;
 stack=InitStack_sq();               //建立空栈
 printf("\n 已建立一个空栈！\n");
 
 printf("\n需要入栈的数据个数(不得大于%d) ：",MAXLEN);      
 scanf("%d",&n);
 printf("\n请输入数据：");          //数据入栈 
 for(i=1;i<=n;i++)
 {
  scanf("%d",&y);
  Push_sq(&stack,y);
 }
  
 print(stack);               //输出栈中元素
 
 GetTop_sq(&stack,&z);     //取栈顶元素，送到z
 printf("\n栈顶数据为：%d\n",z); 
 
 printf("\n需要出栈的数据个数(不得大于%d) ：",n);     //数据出栈 
 scanf("%d",&m);
 printf("\n出栈的数据为："); 
 for(i=1;i<=m;i++)
 {
    Pop_sq(&stack,&z);
    printf("  %d",z);
    }
   print(stack);      
  
 } 
