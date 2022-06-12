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

//先序遍历 
void preorder(tree2 t){
	if(t!=NULL){
		printf("%3c",t->data);
		preorder(t->l);
		preorder(t->r);
	}
}

//中序遍历 
void inorder(tree2 t){
	if(t!=NULL){
		inorder(t->l);
		printf("%3c",t->data);
		inorder(t->r);
	}
}

//后序遍历 
void postorder(tree2 t){
	if(t!=NULL){
		postorder(t->l);
		postorder(t->r);
		printf("%3c",t->data);
	}
}

//嵌套括号表示 
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
	printf("请输入二叉树各结点的值：");//e.g  ABC^^DE^G^^F^^^
	creattree(&t);
	printf("先序遍历：");//ABCDEGF
	preorder(t); 
	printf("\n中序遍历：");//CBEGDFA
	inorder(t);
	printf("\n后序遍历：");//CGEFDBA
	postorder(t);
	printf("\n嵌套括号表示：");
	disptree(t); 
}
