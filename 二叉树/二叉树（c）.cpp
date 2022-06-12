#include<stdio.h>
//#include<malloc.h>
typedef char datatype;
typedef struct tree{
	datatype data;
	struct tree *l,*r;
}tree1,*tree2;

void creattree(tree2 *t){
	datatype a;
	scanf("%c",&a);
	if(a=='^') *t=NULL;
	else{
		*t=new tree1;
//		*t=(tree1 *)malloc(sizeof(tree1));
		(*t)->data=a;
		creattree(&(*t)->l);
		creattree(&(*t)->r);
	}
}

//������� 
void preorder(tree2 t){
	if(t!=NULL){
		printf("%3c",t->data);
		preorder(t->l);
		preorder(t->r);
	}
}

//������� 
void inorder(tree2 t){
	if(t!=NULL){
		inorder(t->l);
		printf("%3c",t->data);
		inorder(t->r);
	}
}

//������� 
void postorder(tree2 t){
	if(t!=NULL){
		postorder(t->l);
		postorder(t->r);
		printf("%3c",t->data);
	}
}

//Ƕ�����ű�ʾ 
void disptree(tree2 t){
	if(t!=NULL){
		printf("%c",t->data);
		if(t->l!=NULL||t->r!=NULL){
			printf("(");
			disptree(t->l);
			if(t->r!=NULL)
			printf(",");
			disptree(t->r);
			printf(")");
		}
	}
}

int main(){
	tree2 t;
	printf("�����������������ֵ��");//e.g  ABC^^DE^G^^F^^^
	creattree(&t);
	printf("���������");//ABCDEGF
	preorder(t); 
	printf("\n���������");//CBEGDFA
	inorder(t);
	printf("\n���������");//CGEFDBA
	postorder(t);
	printf("\nǶ�����ű�ʾ��");
	disptree(t); 
}
