#include<stdio.h>
int main()
{
	int one[5]={1,3,5,4,6};
	char two[5]={'e','f','g','h'};
	float three[5]={1.2,3.4,4.5,5.6};
	for(int i=0;i<5;i++)
		printf("%d\t",one[i]);
	for(int i=0;i<5;i++)
		printf("%c\t",two[i]);
	for(int i=0;i<5;i++)
		printf("%f\t",three[i]);
	return 0;
 } 
