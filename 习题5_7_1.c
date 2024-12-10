#include<stdio.h>
int main(void){
	double x,y;
	printf("x=");
	scanf("%lf",&x);
	if(x<-5)
		y=-3*x+10;
	else if(x<-5)
		y=x;
	else if(x==0)
		y=0;
	else if(x<=5)
		y=2*x;
	else if(x>5)
		y=4*x-10;
		printf("y=%lf",y);
}
