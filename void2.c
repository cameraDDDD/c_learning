#include<stdio.h>
#include<stdlib.h>
#define SUCCESS "�ɹ�"
int main(void){
	int*p=malloc(4);
	if (!p)printf("%s",SUCCESS);if(p==NULL)printf("���ɹ�");
	
}
