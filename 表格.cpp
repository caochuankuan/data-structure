#include<stdio.h>
 
typedef struct kuan{
	int num;
	char name[10];
	float score;
}list;

typedef struct{
	list p[50];
	int len;
}people; 

int main()
{
	int i;
	people a;
	printf("�������ĳ��ȣ�");
	scanf("%d",&a.len) ;
	printf("����������\nѧ�� ���� ����\n");
	for(i=0;i<a.len;i++)
	scanf("%d%s%f",&a.p[i].num,&a.p[i].name,&a.p[i].score);
	printf("\n\n\nѧ��\t����\t����\n");
	for(i=0;i<a.len;i++)
	printf("%d\t%s\t%.1f\n",a.p[i].num,a.p[i].name,a.p[i].score);
	return 0;
}
