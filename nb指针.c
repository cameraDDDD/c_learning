#include<stdio.h>
int main(void){
	
	int x = 10;
	void* p = &x; // 整数指针转为 void 指针
	
	char a = 'X';
	p = &a;

	printf("%c\n", *p); 
}









/*#include <stdio.h>  

int main() {  
    int x = 10; // 假设x是一个整数  
    void* p2 = &x; // 将p1指向x  
    char a = 'X';  
    *p2 = &a; // 将p2指向a  

    // 可以添加一些输出以验证指针的值  
    printf("Value of x: %d\n", *(int*)p2);  
    printf("Value of a: %c\n", *(char*)p2);  

    return 0;  
}
*/









