# include <stdio.h>
# include <malloc.h>
typedef int ELEMTP ;                 //�������ݵ����� 
typedef struct dupnode              //������ṹ 
{ 
  ELEMTP data;                          //������ 
  struct dupnode *prior,*next;         //ָ����(һǰ��һ�� 
}DUPNODE;
  
int CreateListD(DUPNODE *head,int n)     //����(β�巨��  
{
 int i;
 DUPNODE *s,*last;                     //lastΪ��ʱ��㣬������ָ�����һ���ڵ�
 last=head;                         //last ָ��ͷ��㣨Ҳ�����һ���������Կ������ߵȼۡ�  
 printf("\n���������ݣ�");
 for(i=0;i<n;i++)                       
 {s=(DUPNODE *)malloc(sizeof(DUPNODE));      
  scanf("%d",&s->data);
  s->next=NULL; s->prior=NULL;         //�½��ĵ�ַ���ÿ�  
  last->next=s; s->prior=last;        // �� last->nextָ���½�� 
  last=s;                            // lastָ��s�����Կ������ߵȼۣ�  
 } 
  
} 

int DuInsElem(DUPNODE *head,int i,ELEMTP x)     //�������ڱ�β�������� 
{   
    int j=0;
 DUPNODE *p;
 p=head;
 while(p->next!=NULL&&j<i)       
 {
  p=p->next;
  j++;                      //ֱ���ҵ�i��λ�� 
 }                         
  DUPNODE *s;                     //��p֮ǰ������s 
  s=(DUPNODE *)malloc(sizeof(DUPNODE));
  s->data=x;
  s->prior=p->prior;
  p->prior->next=s;              //p->prior ����p��ֱ��ǰ�� 
  s->next=p;
  p->prior=s;
}

int PutOut(DUPNODE *head)              //������� 
 { 
    printf("\n�����������ǣ�");
    DUPNODE *tem=head;                 //  ��ͷָ��ĵ�ַ������ʱ��ָ��
 while (tem->next != NULL)          //  ָ�����һ������ָ����ʱ��ֹͣ
 {       
  tem = tem->next;               //  ��㲻������ƶ�
  printf("%d  ", tem->data);
 }
    printf("\n"); 
 } 
 
void freenode(DUPNODE *head)       //�ͷ������Ԫ���ڴ� 
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
    int n,x,i;                                         //������� 
 DUPNODE *head;                                                                
  
 head=(DUPNODE *)malloc(sizeof(DUPNODE));      //������ͷhead 
 head->prior=NULL;
 head->next=NULL;  
 printf("�������ݵĸ�����");        
 scanf("%d",&n); 
    CreateListD(head,n);         //����˫����     
    PutOut(head);               //�������
    
    printf("\n������Ҫ��������ݣ�");    
	scanf("%d",&x); 
	printf("\n����λ��:");
	scanf("%d",&i); 
	DuInsElem(head,i,x);
	
	PutOut(head);
	  
	freenode(head);
}
