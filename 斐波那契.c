#include <stdio.h>
//int Fe(int n);Ϊʲô���� 
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
	printf("��n����%d\n",sum);
	goto front;//������ 
	}
	
	return 0;	
}
