#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // 使用变量 n 来定义数组的大小（变长数组）
    int array[n];

    // 初始化数组
    for (int i = 0; i < n; i++) {
        array[i] = i * 2;
    }

    // 打印数组
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
