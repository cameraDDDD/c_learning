#include<stdio.h>
#include<stdlib.h>
int main(void){
	void *p=(int*)malloc(sizeof(int));//抽象 
	int *q=p;
	*q=111;
	printf("没事做多敲代码,\n%d",*q);
}
