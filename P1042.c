#include<stdio.h>
int str[5000]={0};
int main(void){
	char c;
	int x=0;int m=0;
	int y=0;int n=0;
	int i=0;
	
	while((c=getchar())!='E'){
		
		if(c=='W')
		{	m++;
			x++;
			if(x>=11&&x-y>=2)
				{printf("%d:%d\n",x,y);
				x=0;
				y=0; }
			if(m>=21&&m-n>=2){
			
				str[i]=m;str[i+1]=n;i+=2;m=0;n=0;}
			}	
		if(c=='L')
		{	n++;
			y++;
			if(y>=11&&y-x>=2)
				{printf("%d:%d\n",x,y);
				x=0;
				y=0;} 
			if(n>=21&&n-m>=2){
			
				str[i]=m;str[i+1]=n;i+=2;m=0;n=0;}
		}
		}	
	
		printf("%d:%d\n",x,y);		
			
		
	
	for(int k=0;str[k]!='\0';k+=2)
	{
		printf("\n%d:%d",str[k],str[k+1]);
	}
	printf("\n%d:%d",m,n);
	
	
return 0;}
