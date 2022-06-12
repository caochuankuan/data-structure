//例2：有两个线性表A和B，都是循环链表存储结构，两个链表头指针分别为 head1和head2 ，将B链表链接到A链表的后面， 合并成一个链表。
# include <stdio.h>
# include <malloc.h>
typedef struct linknode              //定义结点类型 
{ int data;                          //数据域 
  struct linknode *next;             //指针域 
}LinkList;

LinkList *Create_circular()       //建立单向循环链表，并返回指向表头的指针 
{
 int a,n;
 LinkList *head,*p,*q;        //q是指向表尾的指针，p是新产生的指针        
 head=(LinkList *)malloc(sizeof(LinkList)); 
 q=head;               
 printf("\n\t请输入数据个数：");   
 scanf("%d",&n); 
 head->data=n;     //头结点数据域存放结点个数 
 printf("\n\t请输入数据：");
 while(n>0)
  {
     scanf("%d",&a);
     p=(LinkList *)malloc(sizeof(LinkList));
     p->data=a;
     q->next=p;
     q=p;
     n--;  
  }
  q->next=head;
  return(head);  
}
 
LinkList *Connect(LinkList *head1,LinkList *head2) //合并链表
{
  LinkList *p,*q;
  p=head1->next;              //查找head1的最后一个结点
  while(p->next!=head1)       //循环结束时，p为 head1的尾结点 
      p=p->next; 
  q=head2->next;             //查找head2的最后一个结点
  while(q->next!=head2)      //循环结束时，q为 head2的尾结点   
      q=q->next;
  p->next=head2->next;       //(head2->next)是head2的第一个数据结点地址，（p->next）是 head1的尾结点地址域。 
  q->next=head1;            //(q->next)是 head2的尾结点地址域,指向head1的头，实现 A、B两表链接 
  free(head2);
  return(head1);
}
     
void freenode(LinkList *head)       //释放链表各元素内存 
{
 LinkList *q=head,*p;
 do
 {p=q->next;
 free(q);
 q=p;
 }while(p!=head);
}

int main()
{   
 LinkList *a,*b,*c,*d;  
 printf("\n表1：");                          
 a=Create_circular();
 printf("\n表2：");    
 b=Create_circular();
 c=Connect(a,b);
 d=c;                      //d是用来移动的指针 
 printf("\n链接后的表：");
 while(d->next!=c)
 {
  d=d->next;
  printf("  %2d",d->data);
 }
 freenode(c);
}
 
 
 
