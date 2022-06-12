# include <stdio.h> 
# include <malloc.h> 

typedef int DataType;             //方便后续改变存储数据的类型 

typedef struct stacknode               /*定义链栈结点*/
{
    DataType data;		          
    struct stacknode *next;              /*指针类型,存放下一个结点地址*/
}LinkStack;

LinkStack *InitStack()    //初始化链栈函数，返回栈顶S的地址 
{
   LinkStack *S;         //S为栈顶标记 
   S=NULL;
   return S;
}

LinkStack *Push(LinkStack *S)
{
	int n; 
	DataType x;
	LinkStack *p;                //P为进栈的结点
	printf("\n请输入需进栈的数据个数 n ：");
	scanf("%d",&n);
	printf("\n请输入进栈的数据：");
	while(n>0)
	{
	  scanf("%d",&x);	 
	  p=(LinkStack *)malloc(sizeof(LinkStack));
	  p->data=x;
	  p->next=S;      //把新结点放在栈顶之上 
	  S=p;            //新结点成为新的栈顶 
	  n--;
    }
	return S;
}

int StackEmpty(LinkStack *S)   //判空函数 
{
	if(S==NULL)  return 1;
	 else return 0;
}

int GetTop(LinkStack *S)      //取栈顶元素 
{  
   DataType x; 
   if(StackEmpty(S))                  //先判断栈是否为空 
      printf("栈空！"); 
   else  
   	x=S->data;
   printf("\n栈顶元素为：%d\n",x);	                      
}

LinkStack * Pop(LinkStack *S)    //出栈函数
{
   LinkStack * p; 
   DataType x; 
   int m,i;
   
   if(StackEmpty(S))  printf("栈空!"); 
   else 
    {
	   printf("\n请输入需出栈的数据个数 m ：");
       scanf("%d",&m);
       printf("\n出栈的数据为："); 
       for(i=0;i<m;i++)
	  {  x=S->data;
         p=S;         //给原栈顶结点起了个别名p 
         S=S->next;   //栈顶后移 
         free(p); 
		 printf("%3d",x);  
      }     	
    } 
	return S; 
}

void print(LinkStack *S)  //输出栈
{
  LinkStack * p;
  p=S;
  if(p!=NULL) 
  {
  	printf("\n\n链栈中的数据为：");
  	while(p!=NULL)
  	{
  		printf("%3d",p->data);
  		p=p->next;
	  }
   }
   else
    printf("\n\n栈已清空！"); 
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
	LinkStack *S;       //定义栈顶标记为S 
	S=InitStack();     //初始化链栈 
	S=Push(S);        //数据入栈  
	print(S);        //查看栈中所有元素 
	GetTop(S);      //读取栈顶元素
	S=Pop(S);          //元素出栈，返回出栈后的栈顶指针 
    print(S);	      //查看栈中所有元素（注意S已发生变化） 
    if(S!=NULL) freenode(S);   //如果S已空，则不需释放 
	
}










