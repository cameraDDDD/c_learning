#include<stdio.h>
#include<math.h>
void fun(int x,int y);
int main(void){
int n,l; 
scanf("%d",&n);
l=pow(2,n);
int men[l][l];//模拟矩阵
for(int i=0;i<l;i++){//i代表第i+1行 
	for(int j=0;j<l;j++)
	{men[i][j]=1;
		
	}
}
int leng=l/2;int num=0;
void fun(int x,int y){int yx=y;int y0;int xx=x;//将y赋给yx防止每次内层循环后y的值发生改变 
	for(int x0=x+leng;x<x0;x++){
		for(y=yx,y0=y+leng;y<y0;y++)
			{men[x][y]=0;
		}}x=xx;y=yx;num++;//x,y赋回原值 
	if(x!=l-1){
		x+=leng;
		if(num%3==0)
		leng/=2;
	
		//leng*=2;
		//y+=leng;
		//leng/=2;
		//fun(x,y);
		
		
		
		
		}
}

fun(0,0);


 











for(int i=0;i<l;i++){
	for(int j=0;j<l;j++){
		printf("%d ",men[i][j]) ;
	}
printf("\n");
}
return 0;
}
