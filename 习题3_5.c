#include<stdio.h>
int main(void){
	int a,b,c;
	scanf("%d ",&a);
	while (scanf("%d",&b)!=EOF)
	{printf("%d ",a-b);
	a=b;
	b=c;
	}
}
