# include <stdio.h>
# include <malloc.h>

typedef int ELEMTP ;                 //定义数据的类型 

typedef struct dupnode              //定义结点结构 
{ 
  ELEMTP data;                          //数据域 
  struct dupnode *prior,*next;         //指针域(一前，一后） 
}DUPNODE;
  
int CreateListD(DUPNODE *head,int n)     //建表(尾插法）  
{
 int i;
 DUPNODE *s,*last;                     //last为临时结点，它用来指向最后一个节点
                
 last=head;                         //last 指向头结点（也是最后一个），可以看作两者等价。  
 printf("\n请输入数据：");
 for(i=0;i<n;i++)                       
 {s=(DUPNODE *)malloc(sizeof(DUPNODE));      
  scanf("%d",&s->data);
  s->next=NULL; s->prior=NULL;         //新结点的地址域置空  
  last->next=s; s->prior=last;        // 让 last->next指向新结点 
  last=s;                            // last指向s（可以看作两者等价）  
 } 
  
} 

int PutOut(DUPNODE *head)              //输出函数 
 { 
    printf("\n建立的链表是：");
    DUPNODE *tem=head;                 //  将头指针的地址赋给临时的指针
 while (tem->next != NULL)          //  最后一个结点的指针域为空 
 {       
  tem = tem->next;               //  结点不断向后移动
  printf("%d  ", tem->data);
 }
    printf("\n"); 
 } 
 
void freenode(DUPNODE *head)       //释放链表各元素内存 
{
 DUPNODE *q=head,*p;
 do
 {p=q->next;
 free(q);
 q=p;
 }while(p!=NULL);
}

int main()
{  
    int n;                                         //定义变量 
 DUPNODE *head;                                                                
  
 head=(DUPNODE *)malloc(sizeof(DUPNODE));      //建立表头head 
 head->prior=NULL;
 head->next=NULL; 
 
 printf("输入数据的个数：");        
 scanf("%d",&n);
 
    CreateListD(head,n);         //建立双链表 
    
    PutOut(head);               //输出链表
    
    freenode(head);             //释放链表所占内存 
}

 
 
