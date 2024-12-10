#include<stdio.h>
#include<stdlib.h>
#define SUCCESS "成功"
int main(void){
	int*p=malloc(4);
	if (!p)printf("%s",SUCCESS);if(p==NULL)printf("不成功");
	
}
