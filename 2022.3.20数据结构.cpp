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
		y->people[j+1]=x;/*此处不是循环体内容，执行循环体 最后一步j--了，所以此处要j+1.*/
		(y->len)++;
		return 1;
	}
} 

int main(){
	int i,c,n;
	list2 a;
	list1 b;
	printf("请输入表的长度:");
	scanf("%d",&a.len);
	
	printf("请输入数据：\n");
	printf("序号	姓名	地址\n");
	for(i=0;i<a.len;i++)
	scanf("%d	%s	%s",&a.people[i].num,&a.people[i].name,&a.people[i].adress);
	
	printf("\n\n您输入的数据信息如下：\n序号	姓名	地址\n");
	for(i=0;i<a.len;i++)
	printf("%d	%s	%s\n",a.people[i].num,a.people[i].name,a.people[i].adress);
	
	printf("\n\n请输入你要插入的数据:\n");
	scanf("%d	%s	%s",&b.num,&b.name,&b.adress);
	printf("请输入你要插入的位置（序号）:");
	scanf("%d",&c);
	n=charu(c,b,&a);/*与上面插入函数对应*/ 
	if(n==0)
	printf("\n\n输入错误，请重新输入！");
	if(n==1)
	{
		printf("\n\n新的信息表如下:\n");
		printf("序号	姓名	地址\n");
		for(i=0;i<a.len;i++)
		printf("%d	%s	%s\n",a.people[i].num,a.people[i].name,a.people[i].adress);
	}
	return 0;
}
 
