#include<stdio.h>
typedef struct kuan{
	int num;
	char name[10];
	char adress[10];
}list1;
typedef struct{
	list1 people[50];
	int len;
}list2;

int charu(int i,list1 x,list2 *y){
	int j;
	if(i<1||i>y->len)
	return 0;
	else
	{
		for(j=y->len;j>=i-1;j--)
		y->people[j+1]=y->people[j];
		y->people[j+1]=x;/*�˴�����ѭ�������ݣ�ִ��ѭ���� ���һ��j--�ˣ����Դ˴�Ҫj+1.*/
		(y->len)++;
		return 1;
	}
} 

int main(){
	int i,c,n;
	list2 a;
	list1 b;
	printf("�������ĳ���:");
	scanf("%d",&a.len);
	
	printf("���������ݣ�\n");
	printf("���	����	��ַ\n");
	for(i=0;i<a.len;i++)
	scanf("%d	%s	%s",&a.people[i].num,&a.people[i].name,&a.people[i].adress);
	
	printf("\n\n�������������Ϣ���£�\n���	����	��ַ\n");
	for(i=0;i<a.len;i++)
	printf("%d	%s	%s\n",a.people[i].num,a.people[i].name,a.people[i].adress);
	
	printf("\n\n��������Ҫ���������:\n");
	scanf("%d	%s	%s",&b.num,&b.name,&b.adress);
	printf("��������Ҫ�����λ�ã���ţ�:");
	scanf("%d",&c);
	n=charu(c,b,&a);/*��������뺯����Ӧ*/ 
	if(n==0)
	printf("\n\n����������������룡");
	if(n==1)
	{
		printf("\n\n�µ���Ϣ������:\n");
		printf("���	����	��ַ\n");
		for(i=0;i<a.len;i++)
		printf("%d	%s	%s\n",a.people[i].num,a.people[i].name,a.people[i].adress);
	}
	return 0;
}
 
