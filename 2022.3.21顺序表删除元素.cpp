#include<stdio.h>
typedef struct kuan{
	int num;
	char name[10];
	char adress[10];
}element;
typedef struct{
	element kuan[20];
	int len;
}list;

int shanchu(int i,list *l1){
	int j;
	if(i<1||i>l1->len)
	return 0;
	else{
		for(j=i-1;j<=l1->len;j++)
		l1->kuan[j]=l1->kuan[j+1];
		(l1->len)--;
		return 1;
	}
} 

int main(){
	int b,k,n;
	list a;
	printf("�������:");
	scanf("%d",&a.len);
	printf("����������:\n");
	printf("ѧ��	����	��ַ\n");
	for(k=0;k<a.len;k++)
	scanf("%d	%s	%s",&a.kuan[k].num,&a.kuan[k].name,&a.kuan[k].adress);
	printf("ԭ���ݱ�\n");
	printf("ѧ��	����	��ַ\n");
	for(k=0;k<a.len;k++)
	printf("%d	%s	%s\n",a.kuan[k].num,a.kuan[k].name,a.kuan[k].adress);
	printf("\n\n��������Ҫɾ����Ԫ��(ѧ��)��"); 
	scanf("%d",&b); 
	n=shanchu(b,&a);
	if(n==0)
	printf("error");
	else{
	printf("\n�����ݱ�:\n");
	for(k=0;k<a.len;k++)
	printf("%d	%s	%s\n",a.kuan[k].num,a.kuan[k].name,a.kuan[k].adress);
}
	return 0;
}
