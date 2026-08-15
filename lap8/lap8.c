#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

void nhapXuatSinhVien(struct SinhVien mangSV[], int *n);
void sapXepSinhVien(struct SinhVien mangSV[], int n);
void timKiemSinhVien(struct SinhVien mangSV[], int n);
void xuatHocBong(struct SinhVien mangSV[], int n);

void inSinhVien(struct SinhVien sv)
{
    printf("%-15s %-25s %-20s %-10.2f\n",
           sv.mssv,
           sv.tenSV,
           sv.nganhHoc,
           sv.diemTB);
}

void nhapXuatSinhVien(struct SinhVien mangSV[], int *n)
{
    printf("\n===== NHAP DANH SACH SINH VIEN =====\n");

    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++)
    {
        printf("\n--- Sinh vien %d ---\n", i + 1);

        printf("Nhap MSSV: ");
        scanf(" %[^\n]", mangSV[i].mssv);

        printf("Nhap ho va ten: ");
        scanf(" %[^\n]", mangSV[i].tenSV);

        printf("Nhap nganh hoc: ");
        scanf(" %[^\n]", mangSV[i].nganhHoc);

        printf("Nhap diem TB: ");
        scanf("%f", &mangSV[i].diemTB);
    }

    printf("\nDANH SACH SINH VIEN\n");

    printf("%-15s %-25s %-20s %-10s\n",
           "MSSV", "Ho va ten", "Nganh hoc", "Diem TB");

    printf("\n");

    for (int i = 0; i < *n; i++)
    {
        inSinhVien(mangSV[i]);
    }
}

void sapXepSinhVien(struct SinhVien mangSV[], int n)
{
    struct SinhVien temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mangSV[i].diemTB > mangSV[j].diemTB)
            {
                temp = mangSV[i];
                mangSV[i] = mangSV[j];
                mangSV[j] = temp;
            }
        }
    }

    printf("\nDANH SACH SINH VIEN SAU KHI SAP XEP\n");

    printf("%-15s %-25s %-20s %-10s\n",
           "MSSV", "Ho va ten", "Nganh hoc", "Diem TB");

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        inSinhVien(mangSV[i]);
    }
}

void timKiemSinhVien(struct SinhVien mangSV[], int n)
{
    char mssvTim[50];
    int found = 0;

    printf("\n===== TIM KIEM SINH VIEN THEO MSSV =====\n");

    printf("Nhap MSSV can tim: ");
    scanf(" %[^\n]", mssvTim);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(mangSV[i].mssv, mssvTim) == 0)
        {
            printf("\nTim thay sinh vien!\n");

            printf("%-15s %-25s %-20s %-10s\n","MSSV", "Ho va ten", "Nganh hoc", "Diem TB");

            printf("\n");

            inSinhVien(mangSV[i]);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nKhong tim thay sinh vien co MSSV nay!\n");
    }
}

void xuatHocBong(struct SinhVien mangSV[], int n)
{
    int found = 0;

    printf("\n===== DANH SACH SINH VIEN DAT HOC BONG =====\n");

    printf("%-15s %-25s %-20s %-10s\n",
           "MSSV", "Ho va ten", "Nganh hoc", "Diem TB");

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        if (mangSV[i].diemTB >= 8.0)
        {
            inSinhVien(mangSV[i]);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("Khong co sinh vien nao dat diem >= 8.0!\n");
    }
}

int main()
{
    struct SinhVien mangSV[100];
    int n = 0;
    int chon;

    do
    {
        printf("\n");
        printf("+---------------------------------------------------------+\n");
        printf("|          HE THONG QUAN LY SINH VIEN (LAB 8)            |\n");
        printf("+---------------------------------------------------------+\n");
        printf("| 1. Nhap va Xuat danh sach sinh vien                    |\n");
        printf("| 2. Sap xep sinh vien theo diem TB tang dan             |\n");
        printf("| 3. Tim kiem sinh vien theo Ma so sinh vien (MSSV)      |\n");
        printf("| 4. Xuat danh sach sinh vien dat Hoc bong (>= 8.0)      |\n");
        printf("| 5. Thoat chuong trinh                                  |\n");
        printf("+---------------------------------------------------------+\n");

        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            nhapXuatSinhVien(mangSV, &n);
            break;

        case 2:
            if (n == 0)
            {
                printf("\nChua co danh sach sinh vien!\n");
            }
            else
            {
                sapXepSinhVien(mangSV, n);
            }
            break;

        case 3:
            if (n == 0)
            {
                printf("\nChua co danh sach sinh vien!\n");
            }
            else
            {
                timKiemSinhVien(mangSV, n);
            }
            break;

        case 4:
            if (n == 0)
            {
                printf("\nChua co danh sach sinh vien!\n");
            }
            else
            {
                xuatHocBong(mangSV, n);
            }
            break;

        case 5:
            printf("\nCam on ban da su dung chuong trinh!\n");
            break;

        default:
            printf("\nLua chon khong hop le! Vui long chon tu 1 den 5.\n");
        } 
    } while (chon != 5);

    return 0;
}