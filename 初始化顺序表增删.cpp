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

int shan(int q,list *w) {
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
	int k,n,d,f,g;
	list c={1,2,3,4,5,6,7,8,9};
	datatype e;
	c.len=9;
	printf("ԭ���ݱ�:");
	for(k=0;k<c.len;k++)
	printf("%3d",c.a[k]);
	printf("\n�������ݣ�");
	scanf("%d",&e); 
	printf("����λ��:");
	scanf("%d",&d);
	n=zeng(d,&c,e);
	if(n==0)
	printf("error\n");
	else{
	printf("�����ݱ�:");
	for(k=0;k<c.len;k++)
	printf("%3d",c.a[k]);
	}
	printf("\nɾ���ڼ���Ԫ�أ�");
	scanf("%d",&g) ;
	f=shan(g,&c);
	if(f==0)
	printf("error\n");
	else{
	printf("�����ݱ�:");
	for(k=0;k<c.len;k++)
	printf("%3d",c.a[k]);
}
	return 0;
}
