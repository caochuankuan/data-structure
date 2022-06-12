#include<stdio.h>
#define N 30

//创建栈的节点 
typedef struct{
	char a[N];
	int top;
}stack;

//初始化 
stack chushihua(){
	stack.top=-1;
	return stack;
} 

//进栈 
int jinzhan(stack *s,char elem){
	if(s->top=-1)
	return false;
	else
	s->a[++s->top]=elem;
	return ture;
}

//出栈
int chuzhan(stack *s){
	if(s->top=-1)
	return false;
	else
	s->top--;
} 

//取栈顶元素
int top(stack *s){
	if(s->top=-1)
	return false;
	else
	return s->a[s->top];
} 

//主函数
int main(){
	char kuan[N];
	stack *feng;
	int i,length;
	printf("请输入括号：");
	scanf("%s",&kuan);
	for(i=0;i<feng->top;i++){
		if(kuan[i]=='('||kuan[i]=='{')
		jinzhan(feng,kuan[i]);
		else{
			if()
		}
	}
} 

