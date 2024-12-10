#include<stdio.h>
#include<stdlib.h>
int main(void){

int* p = (int*) malloc(sizeof(int) * 10);

for (int i = 0; i < 10; i++)
  p[i] = i * 5;
for(int n=0;n<10;n++)
printf("%d\n",p[n]);

}
