#include<stdio.h>666
#include<stdlib.h> 666ɵ����ʦ 
#include<string.h> strcpy������ 
int main(void){//int* p = malloc(sizeof(int));
//int* p = (int*) malloc(sizeof(*p));Ҳһ�� 
/*p = 12;
printf("%d\n", *p); // 12*/
int* p = malloc(sizeof(int) * 10);//*p ָ��һ������

for (int i = 0; i < 10; i++)
  p[i] = i * 5;
  //printf("%d",p[1]);
char* g = malloc(100);
strcpy(g, "abc");
printf("%s",*g);


} 
