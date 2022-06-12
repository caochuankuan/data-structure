//��2�����������Ա�A��B������ѭ������洢�ṹ����������ͷָ��ֱ�Ϊ head1��head2 ����B�������ӵ�A����ĺ��棬 �ϲ���һ������
# include <stdio.h>
# include <malloc.h>
typedef struct linknode              //���������� 
{ int data;                          //������ 
  struct linknode *next;             //ָ���� 
}LinkList;

LinkList *Create_circular()       //��������ѭ������������ָ���ͷ��ָ�� 
{
 int a,n;
 LinkList *head,*p,*q;        //q��ָ���β��ָ�룬p���²�����ָ��        
 head=(LinkList *)malloc(sizeof(LinkList)); 
 q=head;               
 printf("\n\t���������ݸ�����");   
 scanf("%d",&n); 
 head->data=n;     //ͷ����������Ž����� 
 printf("\n\t���������ݣ�");
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
 
LinkList *Connect(LinkList *head1,LinkList *head2) //�ϲ�����
{
  LinkList *p,*q;
  p=head1->next;              //����head1�����һ�����
  while(p->next!=head1)       //ѭ������ʱ��pΪ head1��β��� 
      p=p->next; 
  q=head2->next;             //����head2�����һ�����
  while(q->next!=head2)      //ѭ������ʱ��qΪ head2��β���   
      q=q->next;
  p->next=head2->next;       //(head2->next)��head2�ĵ�һ�����ݽ���ַ����p->next���� head1��β����ַ�� 
  q->next=head1;            //(q->next)�� head2��β����ַ��,ָ��head1��ͷ��ʵ�� A��B�������� 
  free(head2);
  return(head1);
}
     
void freenode(LinkList *head)       //�ͷ������Ԫ���ڴ� 
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
 printf("\n��1��");                          
 a=Create_circular();
 printf("\n��2��");    
 b=Create_circular();
 c=Connect(a,b);
 d=c;                      //d�������ƶ���ָ�� 
 printf("\n���Ӻ�ı�");
 while(d->next!=c)
 {
  d=d->next;
  printf("  %2d",d->data);
 }
 freenode(c);
}
 
 
 
