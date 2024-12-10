#include<stdio.h>
int main(void){
	char a;
	char group[1000];
	int i=0;
	
	while((a=getchar())!='\n'){
		group[i]=a;
		i++;}
	for(;i>=0;i--){
		printf("%c",group[i]);
		
	}
return 0;	
}
