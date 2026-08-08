#include <stdio.h>
#include <float.h>

void menu();
void Chucnang1();
void Chucnang2();
void Chucnang3();
void Chucnang4();
void Chucnang5();

float tinhTrungBinhCong(int a[], int n);
void timMaxMin(int a[], int n);
void sapxepGiamdan(int a[], int n);
void maTranbinhphuong(int row, int col);
void xuatSolematran(int row, int col);

int main()
{
    int chon;

    do
    {
        printf("+----------------------------------------------------------+ \n");
        printf("|               MENU CHUONG TRINH LAB 6                    | \n");
        printf("+----------------------------------------------------------+ \n");
        printf("| 1. Tính trung bình tổng số chia hết cho 3 và 5.          | \n");
        printf("| 2. Tìm giá trị Lớn nhất và Nhỏ nhất trong Mảng.          | \n");
        printf("| 3. Sắp xếp Mảng theo thứ tự Giảm dần.                    | \n");
        printf("| 4. Ma trận bình phương (Mảng 2 chiều).                   | \n");
        printf("| 5. Lọc và xuất vị trí Số lẻ trong Ma trận.               | \n");
        printf("| 6. Thoát ứng dụng.                                       | \n");
        printf("+----------------------------------------------------------+ \n");

        printf(">> Moi ban chon chuc nang (1-6): ");
        scanf("%d", &chon);

        switch (chon)
        {

        case 1:
        {
            Chucnang1();
            break;
        }

        case 2:
        {
            Chucnang2();
            break;
        }

        case 3:
        {
            Chucnang3();
            break;
        }

        case 4:
        {
            Chucnang4();
            break;
        }

        case 5:
        {
            Chucnang5();
            break;
        }

        case 6:
        {
            printf("Ban da thoat ung dung. \n");
            break;
        }

        default:
        {
            printf("Lua chon khong hop le! Vui long chon lai. \n");
            break;
        }
        }
    } while (chon != 6);

    return 0;
}

float tinhTrungBinhCong(int a[], int n)
{
    int tong = 0;
    int soDem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] % 5 == 0)
        {
            tong += a[i];
            soDem++;
        }
    }

    if (soDem == 0)
    {
        return -FLT_MAX;
    }
    else
    {
        return (float)tong / soDem;
    }
}

void Chucnang1()
{
    int n;
    int i;
    float tbc;

    printf("Ban da chon chuc nang 1. \n");

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    tbc = tinhTrungBinhCong(a, n);

    if (tbc == -FLT_MAX)
    {
        printf("Khong co so chia het cho 3 va 5. \n");
    }
    else
    {
        printf("Trung binh cong cua cac so chia het cho 3 va 5: %.2f\n", tbc);
    }
}

void timMaxMin(int a[], int n)
{
    int Max = a[0];
    int Min = a[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (a[i] > Max)
        {
Max = a[i];
        }
        if (a[i] < Min)
        {
            Min = a[i];
        }
    }

    printf("Gia tri lon nhat cua mang la: %d\n", Max);
    printf("Gia tri nho nhat cua mang la: %d\n", Min);
}

void Chucnang2()
{
    int i;
    int n;

    printf("Ban da chon chuc nang 2. \n");
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    timMaxMin(a, n);
}

void sapXepGiamDan(int a[], int n)
{
    int i;
    int j;
    int temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Mang sau khi duoc sap xep. \n");

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

void Chucnang3()
{
    int n;
    int i;

    printf("Ban da chon chuc nang 3. \n");
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    sapXepGiamDan(a, n);
}

void maTranbinhphuong(int row, int col)
{
    int a[10][10];
    int i;
    int j;

    printf("Nhap so phan tu cua ma tran: ");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Ma tran sau khi binh phuong: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j] * a[i][j]);
        }

        printf("\n");
    }
}

void Chucnang4()
{
    int row;
    int col;

    printf("Ban da chon chuc nang 4. \n");
    printf("Nhap so  hang: ");
    scanf("%d", &row);
    printf("Nhap vao so cot: ");
    scanf("%d", &col);

    maTranbinhphuong(row, col);
}

void xuatSoLeMaTran(int row, int col)
{
    int a[10][10];
    int i;
    int j;

    printf("Nhap cac so nguyen cua ma tran: ");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Cac so le trong ma tran: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                printf("Phan tu le tai a[%d][%d] = %d\n: ", i, j, a[i][j]);
            }
        }
    }
}

void Chucnang5()
{
    int row;
    int col;

    printf("Ban chon chuc nang 5. \n");

    printf("Nhap so hang: ");
    scanf("%d", &row);
    printf("Nhap so cot: ");
    scanf("%d", &col);

    xuatSoLeMaTran(row, col);
}
