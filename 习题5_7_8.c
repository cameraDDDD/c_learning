#include <stdio.h>
int main(void)
{
    double x[3], y[3];
    for (int i = 1; i <= 3; i++)
    {
        printf("输入第%d个点的坐标:", i);
        scanf("%lf%lf", &x[i - 1], &y[i - 1]);
    }
    if ((y[2] - y[1]) / (x[2] - x[1])-(y[0] - y[1]) / (x[0] - x[1])<0.0001)
        printf("这三个点在一条直线上");
    else
        printf("这三个点不在一条直线上");
    return 0;
}
