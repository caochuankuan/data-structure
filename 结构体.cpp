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
 }kuan={20181701,"���ݷ�","�㶫տ��",2001,3,19,86.0},feng={2131131103,"�ܴ���","�㶫����",2000,2,13,86.4};
 int main()
 {
 	printf("\tѧ��:%d\t����:%s\t���ڵ�:%s\t\t��������:%d��%d��%d��\t����:%.2f\t\n",kuan.num,kuan.name,kuan.address,kuan.brithday.year,kuan.brithday.month,kuan.brithday.day,kuan.score);
 	printf("\tѧ��:%d\t����:%s\t���ڵ�:%s\t\t��������:%d��%d��%d��\t����:%.2f\t\n",feng.num,feng.name,feng.address,feng.brithday.year,feng.brithday.month,feng.brithday.day,feng.score);
 	return 0;
 }
