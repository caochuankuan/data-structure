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
	cout<<"请输入表长:";
	cin>>s.len;
	cout<<"\n请输入数据:"<<endl;
	cout<<"学号	姓名	地址"<<endl;
	for(i=0;i<s.len;i++)
	cin>>s.data[i].num>>s.data[i].name>>s.data[i].adress;
	cout<<"\n\n原数据表:"<<endl;
	cout<<"学号	姓名	地址"<<endl;
	for(i=0;i<s.len;i++)
	cout<<s.data[i].num<<"	"<<s.data[i].name<<"	"<<s.data[i].adress<<endl;
	cout<<"\n\n请输入需要删除的数据（学号）:";
	cin>>b;
	y=del(b,&s);
	if(y==0)
	cout<<"error"<<endl;
	else{
	cout<<"\n\n新数据表:"<<endl;
	cout<<"学号	姓名	地址"<<endl; 
	for(i=0;i<s.len;i++)
	cout<<s.data[i].num<<"	"<<s.data[i].name<<"	"<<s.data[i].adress<<endl;
}
	return 0;
}
