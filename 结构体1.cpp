#include<stdio.h>
struct data
{
	int year;
	int month;
	int day;
}; 
struct
{
	char name[10];
	char phone[20];
	char address[30];
	struct data birthday;
}body[4]={{"�й��ƶ�","10086","������������",2000,4,20},{"�й���ͨ","10010","������������",2009,1,6},{"�й�����","10000","������������",1995,4,27},{"�й����","96655","�����з�̨��",2020,9,25}};
int main()
{
	int i;
	printf("�й��Ĵ���Ӫ�̻�����Ϣ\n\n");
	for(i=0;i<4;i++)
	printf("%d.%s\n  �ͷ��绰:%s\n  �ܲ����ڵ�:%s\n  ����ʱ��:%d��%d��%d��\n\n",i+1,body[i].name,body[i].phone,body[i].address,body[i].birthday.year,body[i].birthday.month,body[i].birthday.day);
	return 0;
 } 
