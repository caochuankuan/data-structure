#include<iostream>
using namespace std;

typedef struct cao{
	int num;
	char name[10];
	char address[20];
}list1;
typedef struct{
	list1 chuan[50];
	int len;
}list2;

int zeng(int a,list1 b,list2 *c){//���뺯�� 
	int d;
	if(a<1||a>c->len)
	return 0;
	else{
		for(d=c->len;d>=a-1;d--)//a-1-->��Ϊ�����±��0��ʼ�� 
		c->chuan[d+1]=c->chuan[d];
		c->chuan[d+1]=b;//ѭ������ʱj--�ˣ�����Ҫ�ӻ����� 
		(c->len)++;//��ĳ��ȼ�һ�� 
		return 1;
	}
} 

int shan(int k,list2 *l) {//ɾ�����������Ƿ��� 
	int m;
	if(k<1||k>l->len)
	return 0;
	else{
		for(m=k-1;m<=l->len;m++)
		l->chuan[m]=l->chuan[m+1];
		(l->len)--;
		return 1;
	}
}

int main(){
	int i,g,h,n,o;
	list1 e;
	list2 f;
	cout<<"�������ĳ���:";
	cin>>f.len;
	cout<<"����������:(��ʽ:��� ���� ��ַ)"<<endl;
	for(i=0;i<f.len;i++)
	cin>>f.chuan[i].num>>f.chuan[i].name>>f.chuan[i].address;
	cout<<"\n\nԭ���ݱ�:"<<endl;
	cout<<"���   ����     ��ַ"<<endl;
	for(i=0;i<f.len;i++)
	cout<<" "<<f.chuan[i].num<<"    "<<f.chuan[i].name<<"  "<<f.chuan[i].address<<endl;
	cout<<"\n\n��������Ҫ���������:(��ʽ:��� ���� ��ַ)"<<endl;
	cin>>e.num>>e.name>>e.address;
	cout<<"��������Ҫ�����λ�ã���ţ�:";
	cin>>h;
	g=zeng(h,e,&f);
	if(g==0)
	cout<<"error"<<endl;
	else{
	cout<<"\n\n�����ݱ�:"<<endl;
	cout<<"���   ����     ��ַ"<<endl;
	for(i=0;i<f.len;i++)
	cout<<" "<<f.chuan[i].num<<"    "<<f.chuan[i].name<<"  "<<f.chuan[i].address<<endl;
	cout<<"\n��������Ҫɾ����Ԫ�أ���ţ�:";
	cin>>o;
	n=shan(o,&f);
	if(n==0)
	cout<<"error"<<endl;
	else{
	cout<<"\n\n�����ݱ�:"<<endl;
	cout<<"���   ����     ��ַ"<<endl;
	for(i=0;i<f.len;i++)
	cout<<" "<<f.chuan[i].num<<"    "<<f.chuan[i].name<<"  "<<f.chuan[i].address<<endl;
}
	}
	return 0;
}
