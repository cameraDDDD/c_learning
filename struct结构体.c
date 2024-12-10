#include<stdio.h>
int main(void){
	struct kevin{
		int* n;
		int ab;
		char hu[100];
	};
	int a;
	struct kevin handson={.ab=3,.n=&a,.hu[0]='6'};
	printf("------%d_______%p_____%s",*handson.n,handson.n,handson.hu);
	
	
}
