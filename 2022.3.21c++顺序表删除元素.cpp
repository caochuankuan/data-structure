#include<iostream>
using namespace std;

typedef struct datatype{
	int num;
	char name[10];
	char adress[10];
}list1;
typedef struct kuan{
	datatype data[10];
	int len;
}list2;

int del(int n,list2 *a){
	int j;
	if(n<1||n>a->len)
	return 0;
	else{
		for(j=n;j<=a->len;j++)
		a->data[j-1]=a->data[j];
		(a->len)--;
		return 1;
	}
} 

int main(){
	int b,i,y;
	list2 s;
	cout<<"�������:";
	cin>>s.len;
	cout<<"\n����������:"<<endl;
	cout<<"ѧ��	����	��ַ"<<endl;
	for(i=0;i<s.len;i++)
	cin>>s.data[i].num>>s.data[i].name>>s.data[i].adress;
	cout<<"\n\nԭ���ݱ�:"<<endl;
	cout<<"ѧ��	����	��ַ"<<endl;
	for(i=0;i<s.len;i++)
	cout<<s.data[i].num<<"	"<<s.data[i].name<<"	"<<s.data[i].adress<<endl;
	cout<<"\n\n��������Ҫɾ�������ݣ�ѧ�ţ�:";
	cin>>b;
	y=del(b,&s);
	if(y==0)
	cout<<"error"<<endl;
	else{
	cout<<"\n\n�����ݱ�:"<<endl;
	cout<<"ѧ��	����	��ַ"<<endl; 
	for(i=0;i<s.len;i++)
	cout<<s.data[i].num<<"	"<<s.data[i].name<<"	"<<s.data[i].adress<<endl;
}
	return 0;
}
