#include<stdio.h>
#include<stdlib.h> 
int main(void){int a;
	int*p=malloc(40);
	a=p;
	for(int n=0;n<10;n++) p[n]=n;
	printf("%d",p[0]);
}


