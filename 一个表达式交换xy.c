#include<stdio.h>
int main(void){
	int x=2,y=3,t;
	(y=t)=x=y;
	printf("x=%d,y=%d",x,y);
}
