/*ϰ��4.8*/
#include<stdio.h>
int main(void){
	int day,week;
	printf("����������:");
	scanf("%d",&day);
	week=day/7;
	day=day%7;
	printf("%d��%d��",week,day);
} 
