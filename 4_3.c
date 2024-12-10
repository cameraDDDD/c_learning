#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraodinary being."
int main(void)
{
	char name[5];
	printf("What's your name");
	
	scanf("%s",name);
	printf("Hello,%s.%s\n",name,PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n",strlen(PRAISE),sizeof(name));
	printf("and occupies %zd memory cell.\n",sizeof(PRAISE));
	
	return 0;
}
