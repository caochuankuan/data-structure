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
}body[4]={{"中国移动","10086","北京市西城区",2000,4,20},{"中国联通","10010","北京市西城区",2009,1,6},{"中国电信","10000","北京市西城区",1995,4,27},{"中国广电","96655","北京市丰台区",2020,9,25}};
int main()
{
	int i;
	printf("中国四大运营商基本信息\n\n");
	for(i=0;i<4;i++)
	printf("%d.%s\n  客服电话:%s\n  总部所在地:%s\n  成立时间:%d年%d月%d日\n\n",i+1,body[i].name,body[i].phone,body[i].address,body[i].birthday.year,body[i].birthday.month,body[i].birthday.day);
	return 0;
 } 
