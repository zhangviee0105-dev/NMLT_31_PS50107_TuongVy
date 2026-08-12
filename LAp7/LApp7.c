#include <stdio.h>
#include <string.h>
#include <ctype.h>

void menu();
void demNguyenAmPhuAm();
void kiemtraDangNhap();
void sapxepChuoi();
void thapPhanSangNhiPhan();

int main()
{
    int chon;

    do
    {
        printf("+------------------------------------------------------------------+ \n");
        printf("|                    MENU CHƯƠNG TRÌNH LAB 7                       | \n");
        printf("+------------------------------------------------------------------+ \n");
        printf("| 1. Đếm Nguyên Âm và Phụ Âm trong Chuỗi.                          | \n");
        printf("| 2. Đăng nhập Hệ thống (User & Password).                         | \n");
        printf("| 3. Sắp xếp danh sách Chuỗi theo thứ tự Alphabet.                 | \n");
        printf("| 4. Chuyển đổi số Thập phân sang Nhị phân (Chuỗi).                | \n");
        printf("| 5. Thoát chương trình.                                           | \n");
        printf("+------------------------------------------------------------------+ \n");
        printf(">> Moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        getchar();

        switch (chon)

        {
        case 1:
        {
            demNguyenAmPhuAm();
            break;
        }

        case 2:
        {
            kiemtraDangNhap();
            break;
        }

        case 3:
        {
            sapxepChuoi();
            break;
        }

        case 4:
        {
            thapPhanSangNhiPhan();
            break;
        }

        case 5:
        {
            printf("Ban da thoat chuong trinh. \n");
            break;
        }

        default:
        {
            printf("Lua chon khong hop le! Vui long chon lai. \n");
            break;
        }
        }

    } while (chon != 5);
    return 0;
}

void demNguyenAmPhuAm()
{
    char s[100];
    int demNA = 0;
    int demPA = 0;
    int i;

    printf("Ban chon chuc nang 1. \n");
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o')
        {
            demNA++;
        }
        else if (isalpha(c))
        {
            demPA++;
        }
    }

    printf("So luong nguyen am: %d\n", demNA);
    printf("So luong phu am: %d\n", demPA);
}

void kiemtraDangNhap()
{
    char user[50];
    char pass[50];
    char userSys[] = "admin";
    char passSys[] = "123456";

    printf("Ban chon chuc nang 2. \n");

    printf("Nhap User: ");
    fgets(user, sizeof(user), stdin);

    printf("Nhap Pass: ");
    fgets(pass, sizeof(pass), stdin);

    user[strcspn(user, "\n")] = '\0';
    pass[strcspn(pass, "\n")] = '\0';

    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0)
    {
        printf("Dang nhap thanh cong! \n");
    }
    else
    {
        printf("Username hoac Password khong chinh xac! \n");
    }
}

void sapxepChuoi()
{
char s[5][50];
    char temp[50];
    int i;
    int j;

    printf("Ban chon chuc nangg 3. \n");

    for (i = 0; i < 5; i++)
    {
        printf("Nhap chuoi thu %d: ", i+1);
        fgets(s[i], sizeof(s[i]), stdin);

        s[i][strcmp(s[i], "\n")] = '\0';
    }

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("Danh sach chuoi sau khi sap xep: ");

    for (i = 0; i < 5; i++)
    {
        printf ("%s\n", s[i]);
    }
}

void thapPhanSangNhiPhan()
{
    int n;
    int i = 0;
    int du;
    int j;
    char nhiPhan[50];
    char temp; 

    printf("Ban chon chuc nang 4. \n");

    printf ("Nhap so nguyen duong: ");
    scanf ("%d", &n);

    while (n > 0)
    {
        du = n % 2;
        nhiPhan[i] = du + '0';
        i++;

        n = n / 2;
    }
    j = i;

    for (i = 0; i < j/2; i++)
    {
        temp = nhiPhan[i];
        nhiPhan[i] = nhiPhan[j - i - 1];
        nhiPhan[j - i - 1] = temp;
    }
    nhiPhan[j] = '\0';

    printf ("So nhi phan: %s\n", nhiPhan);
}
