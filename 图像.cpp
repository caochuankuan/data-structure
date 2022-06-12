#include<stdio.h>
	int one(){
		int i,j;
		for(j=1;j<=3;j++){
		for(i=1;i<35;i++)
		printf(" ");
		for(i=1;i<=2;i++)
		printf("*");
		for(i=1;i<5;i++)
		printf(" ");
		for(i=1;i<=2;i++)
		printf("*");
		for(i=1;i<5;i++)
		printf(" ");
		for(i=1;i<=2;i++)
		printf("*");
		printf("\n");} 
	}
	
	int two(){
		for(int k=1;k<=3;k++){
		for(int j=1;j<21;j++)
		printf(" ");
		for(int i=1;i<20;i++){
			if(i%2!=0)
			printf("Éú");
			else
			printf("ÈÕ");
		}
		printf("\n");
	}
	}
	
	int three(){
		for(int k=1;k<=3;k++){
		for(int j=1;j<12;j++)
		printf(" ");
		for(int i=1;i<29;i++){
			if(i%2!=0)
			printf("¿ì");
			else
			printf("ÀÖ");
		}
		printf("\n");
	}
	}
	
	int four(){
		for(int k=1;k<=3;k++){
		for(int j=1;j<6;j++)
		printf(" ");
		for(int i=1;i<70;i++){
			if(i%2==0)
			printf("#");
			else
			printf("&");
		}
		printf("\n");
	}
	}
	
	int five(){
		for(int k=1;k<=3;k++){
		for(int j=1;j<6;j++)
		printf(" ");
		for(int i=1;i<70;i++){
			if(i%2==0)
			printf("#");
			else
			printf("&");
		}
		printf("\n");
	}
	}
	
	int six(){
		for(int k=1;k<=3;k++){
		for(int j=1;j<1;j++)
		printf(" ");
		for(int i=1;i<80;i++){
			if(i%2==0)
			printf("#");
			else
			printf("&");
		}
		printf("\n");
	}
	}
	
	int seven(){
		for(int k=1;k<=3;k++){
		for(int j=1;j<1;j++)
		printf(" ");
		for(int i=1;i<80;i++){
			if(i%2==0)
			printf("#");
			else
			printf("&");
		}
		printf("\n");
	}
	}
	
	int eight(){
		for(int k=1;k<=3;k++){
		for(int j=1;j<1;j++)
		printf(" ");
		for(int i=1;i<80;i++){
			if(i%2==0)
			printf("#");
			else
			printf("&");
		}
		printf("\n");
	}
	}
	
	int main()
	{
		printf("\n\n\n");
		one();
		two();
		three();
		four();
		five();
		six();
		seven();
		eight();
	}
