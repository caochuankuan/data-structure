# include <stdio.h> 
# define MAXLEN 50
	
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
	
void print(SqStack s)
	{
	 int i;
	 if(s.top!=-1)
	 {
	  printf("\n对应的二进制数：");
	  for(i=s.top;i>=0;i--)             //可以调整输出顺序 
	     printf("%d",s.element[i]); 
	 }
	 else  printf("\n输入错误，请输入一个非负十进制整数！"); 
	 printf("\n"); 
	}
	
int main()
	{
	 SqStack stack;      //不是指针，注意下面调用函数时的参数写法 
	 int m,n;
	 stack=InitStack_sq();               //建立空栈
	 
	 printf("请输入需要转换的十进制数：");      
	 scanf("%d",&n);          //数据入栈 
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
	 

