#include <stdio.h>
#define PI 3.14159
const float PII = 3.14159;
int main (){
    float dai, rong, chuViHCN, dienTichHCN, r, chuViHT, dienTichHT;
    printf("Nhap chieu dai, chieu rong: ");
    scanf("%f %f", &dai, &rong);
    chuViHCN = (dai + rong)*2;
    dienTichHCN = dai*rong;
    printf("Hinh chu nhat\nDai: %.2f\nRong: %.2f\nchuVi: %.2f\ndienTich: %.2f\n", dai, rong, chuViHCN, dienTichHCN);

    printf ("Nhap ban kinh:");
    scanf ("%f", &r);
    chuViHT = r*2*PI;
    dienTichHT = r*r*PII;
    printf ("Hinh tron\nBan kinh: %.2f\nchuVi: %.2f\ndienTich: %.2f\n", r, chuViHT, dienTichHT);

    return 0;

}