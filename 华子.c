#include <stdio.h>
#define MAXN 5
int main()
{
	int a[MAXN];
	int i,k;
	char ch;
	for(i=0;;i++)
	{
		scanf("%d%c",&a[i],&ch);
		if(ch=='\n')
		{
			break;
		}
	}
	for(k=0;k<i;k++)
	{
		printf("%d ",a[k+1]-a[k]);
	}
	return 0;
}
