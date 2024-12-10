#include<stdio.h>666
#include<stdlib.h> 666傻逼老师 
#include<string.h> strcpy在里面 
int main(void){//int* p = malloc(sizeof(int));
//int* p = (int*) malloc(sizeof(*p));也一样 
/*p = 12;
printf("%d\n", *p); // 12*/
int* p = malloc(sizeof(int) * 10);//*p 指向一个数组

for (int i = 0; i < 10; i++)
  p[i] = i * 5;
  //printf("%d",p[1]);
char* g = malloc(100);
strcpy(g, "abc");
printf("%s",*g);


} 
