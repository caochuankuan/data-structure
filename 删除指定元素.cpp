#include<stdio.h>

typedef int datatype;
typedef struct{
	datatype a[50];
	int len;
}list;

int zeng(int i,list *x,datatype y){
	int j;
	if(i<1||i>x->len)
	return 0;
	else{
	for(j=x->len;j>=i-1;j--)	
	x->a[j+1]=x->a[j];
	x->a[j+1]=y;
	(x->len)++;
	return 1;
	}
}

int cha(datatype a1,list *a2){//���Һ��� 
	int a3,a4=1;//�����1ָ���Ǵӵ�һ��Ԫ�ؿ�ʼ���ҡ� 
	for(a3=0;a3<a2->len;a3++)
	{
	if(a1!=a2->a[a3])
	a4++;
	if(a1==a2->a[a3])
	break;} 
	return a4;
} 

int shan(int q,list *w) {//ɾ�������� 
	int r;
	if(q<1||q>w->len)
	return 0;
	else{
	for(r=q-1;r<=w->len;r++)
	w->a[r]=w->a[r+1];
	(w->len)--;
	return 1;
	}
} 

int main()
{
	int k,n,d,f,g,h;
	list c={1,2,3,4,5,6,7,8,9};
	datatype e;
	c.len=9;
	printf("ԭ���ݱ�:");
	for(k=0;k<c.len;k++)
	printf("%d\t",c.a[k]);
	printf("\n\n��������:");
	scanf("%d",&e); 
	printf("\n����λ��:");
	scanf("%d",&d);
	n=zeng(d,&c,e);
	if(n==0)
	printf("error\n");
	else{
	printf("\n�����ݱ�:");
	for(k=0;k<c.len;k++)
	printf("%d\t",c.a[k]);
	}
	printf("\n\nɾ��Ԫ��:");
	scanf("%d",&g) ;
	h=cha(g,&c);
	f=shan(h,&c);
	if(f==0)
	printf("error\n");
	else{
	printf("\n�����ݱ�:");
	for(k=0;k<c.len;k++)
	printf("%d\t",c.a[k]);
}
	return 0;
}
