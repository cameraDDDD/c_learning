#include <stdio.h>
//int Fe(int n);为什么能跑 
int main(void){
	unsigned long long n,sum;
	int Fe(int n){
		if (n==1)
		return 1;
		if (n==2)
		return 1;
		if(n>=3)
		return Fe(n-1)+Fe(n-2);
		}
	
	front:
	scanf("%d",&n);
	while(n>=1){
	
	sum=Fe(n);
	printf("第n项是%d\n",sum);
	goto front;//哈哈哈 
	}
	
	return 0;	
}
