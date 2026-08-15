#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    do {
        printf("+-------------------------------+\n");
        printf("|  MENU CHUONG TRINH LAB 3      |\n");
        printf("+-------------------------------+\n");
        printf("1. Chuc nang tinh hoc luc sinh vien \n");
        printf("2. Chuc nang giai phuong trinh bac hai \n");
        printf("3. Chuc nang tinh tien dien tieu thu hang thang \n");
        printf("4. Thoat chuong trinh \n");
        printf("Moi chon chuc nang: ");
        printf("\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                float diem;
                printf("Nhap diem: ");
                scanf("%f", &diem);
                printf("\n");
                if(diem < 0 || diem > 10) {
                    printf("Diem khong hop le \n");
                } 
                else {
                    if(diem >= 9.0) {
                        printf("Hoc luc: Xuat sac \n");
                    } else if(diem >= 8.0) {
                        printf("Hoc luc: Gioi \n");
                    } else if(diem >= 6.5) {
                        printf("Hoc luc: Kha \n");
                    } else if(diem >= 5.0) {
                        printf("Hoc luc: Trung binh \n");
                    } else if(diem >= 3.5){
                        printf("Hoc luc: Yeu \n");
                    } else {
                        printf("Hoc luc: Kem \n");
                    }
                }
                printf("\n");
                break;
            case 2:
                int a, b ,c;
                printf("Nhap he so a: ");
                scanf("%d", &a);

                printf("Nhap he so b: ");
                scanf("%d", &b);

                printf("Nhap he so c: ");
                scanf("%d", &c);

                if(a == 0) {
                    if(b == 0) {
                        if(c == 0) {
                            printf("Phuong trinh vo so nghiem \n");
                        } else {
                            printf("Phuong trinh vo nghiem \n");
                        }
                    } else {
                        float x = - (float)c / b;
                        printf("Phuong trinh co mot nghiem duy nhat: x = %.2f \n", x);
                    }
                }
                else {
                    float delta = (float)(b*b - 4*a*c);
                    if(delta < 0) {
                        printf("Phuong trinh vo nghiem \n");
                    } else if(delta == 0) {
                        float x = - (float)b / (2 * a);
                        printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f \n", x);
                    } else {
                        float x1 = (-b + sqrt(delta)) / (2 * a);
                        float x2 = (-b - sqrt(delta)) / (2 * a);
                        printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f \n", x1, x2);
                    }
                }
printf("\n");
                break;
            case 3:
                int soDien;

                printf("Nhap so dien tieu thu trong thang: ");
                scanf("%d", &soDien);

                if(soDien < 0) {
                    printf("So dien tieu thu khong hop le \n");
                } else {
                    float tienDien;
                    if(soDien <= 50) {
                        tienDien = soDien * 1.678;
                    } else if (soDien <= 100) {
                        tienDien = 50 * 1.678 + (soDien - 50) * 1.734;
                    } else if (soDien <= 200) {
                        tienDien = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
                    } else if (soDien <= 300) {
                        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
                    } else if (soDien <= 400) {
                        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
                    } else {
                        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;
                    }
                    printf("\n");
                    printf("So tien dien phai tra: %.2f VND \n", tienDien);
                    printf("\n");
                }
                break;
            case 4:
                printf("Da thoat chuong trinh.\n");
                printf("\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
                printf("\n");
                break;
        }
    } while(choice != 4);

    return 0;
}
