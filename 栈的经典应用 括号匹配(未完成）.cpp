#include<stdio.h>
#define N 30

//����ջ�Ľڵ� 
typedef struct{
	char a[N];
	int top;
}stack;

//��ʼ�� 
stack chushihua(){
	stack.top=-1;
	return stack;
} 

//��ջ 
int jinzhan(stack *s,char elem){
	if(s->top=-1)
	return false;
	else
	s->a[++s->top]=elem;
	return ture;
}

//��ջ
int chuzhan(stack *s){
	if(s->top=-1)
	return false;
	else
	s->top--;
} 

//ȡջ��Ԫ��
int top(stack *s){
	if(s->top=-1)
	return false;
	else
	return s->a[s->top];
} 

//������
int main(){
	char kuan[N];
	stack *feng;
	int i,length;
	printf("���������ţ�");
	scanf("%s",&kuan);
	for(i=0;i<feng->top;i++){
		if(kuan[i]=='('||kuan[i]=='{')
		jinzhan(feng,kuan[i]);
		else{
			if()
		}
	}
} 

