/*习题4.8*/
#include<stdio.h>
int main(void){
	int day,week;
	printf("请输入天数:");
	scanf("%d",&day);
	week=day/7;
	day=day%7;
	printf("%d周%d天",week,day);
} 
