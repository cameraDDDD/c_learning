#include<stdio.h>
int ups_and_downs(int);
int main(void){
	printf("¿ªÊ¼");
	ups_and_downs(1);
	
	
	
}
int ups_and_downs(int n)
	{printf("6\n");
	if (n<9)
	ups_and_downs(n+1);
	printf("6\n");
	}
