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
	printf("请输入表的长度：");
	scanf("%d",&a.len) ;
	printf("请输入数据\n学号 姓名 分数\n");
	for(i=0;i<a.len;i++)
	scanf("%d%s%f",&a.p[i].num,&a.p[i].name,&a.p[i].score);
	printf("\n\n\n学号\t姓名\t分数\n");
	for(i=0;i<a.len;i++)
	printf("%d\t%s\t%.1f\n",a.p[i].num,a.p[i].name,a.p[i].score);
	return 0;
}
