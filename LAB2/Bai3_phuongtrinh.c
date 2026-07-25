#include <stdio.h>
int main (){
    int a,b;
    float x;
    printf("Nhap a,b:");
    scanf("%d %d", &a, &b);
    x = (float)-b/a;
    printf("Nghiem cua phuong trinh la: %.2f\n",x);



 return 0;
}