#include<stdio.h>
int main(void){
	
	int x = 10;
	void* p = &x; // ����ָ��תΪ void ָ��
	
	char a = 'X';
	p = &a;

	printf("%c\n", *p); 
}









/*#include <stdio.h>  

int main() {  
    int x = 10; // ����x��һ������  
    void* p2 = &x; // ��p1ָ��x  
    char a = 'X';  
    *p2 = &a; // ��p2ָ��a  

    // �������һЩ�������ָ֤���ֵ  
    printf("Value of x: %d\n", *(int*)p2);  
    printf("Value of a: %c\n", *(char*)p2);  

    return 0;  
}
*/









