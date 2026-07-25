#include <stdio.h>
int main() {
    char mssv[30];
    char hoten[100];
    float toan, ly, hoa;
    float diemtb;
    printf("Nhap MSSV: ");
    scanf("%s", mssv);
    printf("Nhap ho ten: ");
    scanf(" %[^\n]", hoten);   
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem Ly: ");
    scanf("%f", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);
    diemtb = (toan * 2 + ly + hoa) / 4;
    printf("\n");
    printf("MSSV: %s\n", mssv);
    printf("Ho ten: %s\n", hoten);
    printf("Diem trung binh: %.2f\n", diemtb);

        return 0;
}