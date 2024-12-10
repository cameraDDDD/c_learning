//Ï°Ìâ5.4 
#include<stdio.h>
int main(void){
	int x,a=0,b=0,c=0,d=0;
	x=(a=1)||(b=2)&&(c=3)&&(b=4);
	printf("%d%d%d%d%d",x,a,b,c,d);
	return 0;
} 
