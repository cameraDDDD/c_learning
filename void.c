#include<stdio.h>
#include<stdlib.h>
int main(void){
	void *p=(int*)malloc(sizeof(int));//���� 
	int *q=p;
	*q=111;
	printf("û�������ô���,\n%d",*q);
}
