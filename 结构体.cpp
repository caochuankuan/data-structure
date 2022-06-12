#include<stdio.h>
struct data
{
	int year;
	int month;
	int day;
 } ;
 struct 
 {
 	int num;
 	char name[20];
 	char address[50];
 	struct data brithday;
 	float score;
 }kuan={20181701,"于逸风","广东湛江",2001,3,19,86.0},feng={2131131103,"曹传宽","广东广州",2000,2,13,86.4};
 int main()
 {
 	printf("\t学号:%d\t姓名:%s\t所在地:%s\t\t出生日期:%d年%d月%d日\t分数:%.2f\t\n",kuan.num,kuan.name,kuan.address,kuan.brithday.year,kuan.brithday.month,kuan.brithday.day,kuan.score);
 	printf("\t学号:%d\t姓名:%s\t所在地:%s\t\t出生日期:%d年%d月%d日\t分数:%.2f\t\n",feng.num,feng.name,feng.address,feng.brithday.year,feng.brithday.month,feng.brithday.day,feng.score);
 	return 0;
 }
