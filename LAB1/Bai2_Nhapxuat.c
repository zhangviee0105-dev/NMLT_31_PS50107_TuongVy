#include <stdio.h>

int main() {
    char mssv[30];
    char hoten[100];
    int namsinh;
    int tuoi;
    float diemtb;

   printf("Nhap MSSV: ");
    scanf("%s", mssv);
    printf("Nhap ho ten: ");
    scanf(" %[^\n]", hoten);
    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);
    printf("Nhap diem trung binh: ");
    scanf("%f", &diemtb);

    tuoi = 2026 - namsinh;

    printf("\n");
    printf("\t\tNHAP THONG TIN SINH VIEN\n\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s\n", hoten);
    printf("Nam sinh: %d\n", namsinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", diemtb);

    return 0;
}