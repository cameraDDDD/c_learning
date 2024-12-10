#include <stdio.h>  

int main(void) {  
    int arr[10];  
    float sum = 0;  
    int max_value, min_value;  

    // 输入数组元素  
    for (int i = 0; i < 10; i++) {  
        scanf("%d", &arr[i]);  // 修改为&arr[i]，以传递数组元素的地址  
    }  

    // 初始化最大值和最小值  
    max_value = arr[0];   
    min_value = arr[0];   

    // 找到最大值和最小值  
    for (int i = 0; i < 10; i++) {  
        if (arr[i] > max_value) {  
            max_value = arr[i];  
        }  
        if (arr[i] < min_value) {  
            min_value = arr[i];   
        }  
    }  

    // 计算总和  
    for (int i = 0; i < 10; i++) {  
        sum += arr[i];  
    }  

    // 去掉最大值和最小值  
    sum = sum - max_value - min_value;  

    // 输出去掉最大值和最小值后的平均值  
    printf("%.2f\n", sum / 8); // %.2f用于格式化输出为小数点后两位  

    return 0; // 添加return语句，表示程序正常结束  
}
	

      



