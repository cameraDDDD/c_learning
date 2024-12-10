#include<stdio.h>
int main(void){
	int x,y=4;
	printf("x=");
	scanf("%d",&x);
	if(x=0)
		y=0;
	else if(x>0)
		y=4*x-10;
	printf("y=%d",y);
}
