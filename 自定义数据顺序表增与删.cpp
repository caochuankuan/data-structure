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

int zeng(int a,list1 b,list2 *c){//插入函数 
	int d;
	if(a<1||a>c->len)
	return 0;
	else{
		for(d=c->len;d>=a-1;d--)//a-1-->因为数组下标从0开始； 
		c->chuan[d+1]=c->chuan[d];
		c->chuan[d+1]=b;//循环结束时j--了，这里要加回来。 
		(c->len)++;//表的长度加一。 
		return 1;
	}
} 

int shan(int k,list2 *l) {//删除函数（覆盖法） 
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
	cout<<"请输入表的长度:";
	cin>>f.len;
	cout<<"请输入数据:(格式:序号 姓名 地址)"<<endl;
	for(i=0;i<f.len;i++)
	cin>>f.chuan[i].num>>f.chuan[i].name>>f.chuan[i].address;
	cout<<"\n\n原数据表:"<<endl;
	cout<<"序号   姓名     地址"<<endl;
	for(i=0;i<f.len;i++)
	cout<<" "<<f.chuan[i].num<<"    "<<f.chuan[i].name<<"  "<<f.chuan[i].address<<endl;
	cout<<"\n\n请输入需要插入的数据:(格式:序号 姓名 地址)"<<endl;
	cin>>e.num>>e.name>>e.address;
	cout<<"请输入需要插入的位置（序号）:";
	cin>>h;
	g=zeng(h,e,&f);
	if(g==0)
	cout<<"error"<<endl;
	else{
	cout<<"\n\n新数据表:"<<endl;
	cout<<"序号   姓名     地址"<<endl;
	for(i=0;i<f.len;i++)
	cout<<" "<<f.chuan[i].num<<"    "<<f.chuan[i].name<<"  "<<f.chuan[i].address<<endl;
	cout<<"\n请输入需要删除的元素（序号）:";
	cin>>o;
	n=shan(o,&f);
	if(n==0)
	cout<<"error"<<endl;
	else{
	cout<<"\n\n新数据表:"<<endl;
	cout<<"序号   姓名     地址"<<endl;
	for(i=0;i<f.len;i++)
	cout<<" "<<f.chuan[i].num<<"    "<<f.chuan[i].name<<"  "<<f.chuan[i].address<<endl;
}
	}
	return 0;
}
