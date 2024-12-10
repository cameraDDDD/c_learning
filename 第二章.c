#include<stdio.h>
#define Pi 3.14
int main(void){
    float area,r;r=1;
    while(r!=0){
    printf("ÊäÈë°ë¾¶:");
    scanf("%f",&r);
    area=Pi*r*r;
    printf("Ô²µÄ°ë¾¶ÊÇ:%.2f",area);}
    return 0;
}
