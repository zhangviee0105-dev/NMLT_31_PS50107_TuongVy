#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\n");
        printf("+-------------------------------+\n");
        printf("|    MENU CHUONG TRINH LAB 4    |\n");
        printf("+-------------------------------+\n");
        printf("1. Tinh trung binh tong cac so chia het cho 2 \n");
        printf("2. Kiem tra So nguyen to \n");
        printf("3. Kiem tra So chinh phuong \n");
        printf("4. Thoat chuong trinh \n");
        printf("Xin moi chon chuc nang(1-4): ");
        scanf("%d", &choice);
        printf("\n");
        
        switch(choice) {
            case 1:
                int min;
                int max;

                printf("Nhap vao 2 gia tri nguyen min va max: ");
                scanf("%d %d", &min, &max);

                if (min > max) {
                    int temp = min;
                    min = max;
                    max = temp;
                }
                int sum = 0;
                int count = 0;
                float trungBinh;
                for (int i = min; i <= max; i++) {
                    if (i % 2 == 0) {
                        sum += i;
                        count++;
                    }
                }
                if (count == 0) {
                    printf("Khong co so nao chia het cho 2.");
                }
                trungBinh = (float) sum / count;
                printf("Trung binh tong cua cac so chia het cho 2 tu %d den %d la: %.2f", min, max, trungBinh);

                break;
            case 2:
                int x;
                printf("Nhap vao 1 so: ");
                scanf("%d", &x);
                int count1 = 0;
                if (x < 2) {
                    printf("%d khong phai la so nguyen to. \n", x);
                }
                else {
                    for (int i = 1; i <= x; i++) {
                        if (x % i == 0)  
                            count1++;
                }
                if (count1 == 2)
                    printf("%d la so nguyen to \n", x);
                else
                    printf("%d khong phai la so nguyen to. \n", x);
                }
                break;
            case 3:
                int x1;
                printf("Nhap vao 1 so: ");
                scanf("%d", &x1);
                int count2;
                for (int i = 0; i <= x1; i++) {
                    count2 = 0;
                    if (i * i == x1) {
                        printf("%d la so chinh phuong. \n", x1);
                        break;
                    }
                    else 
                        count2++;
                }
                if (count2 != 0) {  
                    printf("%d khong phai la so chinh phuong. \n", x1);
                }
                break;
            case 4:
                printf("Dang thoat chuong trinh! \n");
                break;
            default:
                printf("Khong co chuc nang nay. Moi chon lai. \n");
                break;
} 
    }while(choice != 4);

    return 0;
}
