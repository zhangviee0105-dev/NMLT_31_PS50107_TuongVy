#include <stdio.h>

int main() {
    int choice;
    do {
        printf("+-------------------------------+\n");
        printf("|       MENU CHUONG TRINH       |\n");
        printf("+-------------------------------+\n");
        printf("1. Kiem tra so nguyen \n");
        printf("2. Tim uoc so chung va boi so chung cua 2 so \n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke \n");
        printf("4. Tinh tien dien \n");
        printf("5. Chuc nang doi tien \n");
        printf("6. Chuc nang tinh lai suat vay ngan hang vay tra gop \n");
        printf("7. Chuong trinh vay tien mua xe \n");
        printf("8. Sap xep thong tin sinh vien \n");
        printf("9. Game FPOLY-LOTT (2/15) \n");
        printf("10. Chuong trinh tinh toan phan so \n");
        printf("11. Thoat chuong trinh \n");
        printf("Moi chon chuc nang: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Ban da chon chuc nang 1. Kiem tra so nguyen \n");
                break;
            case 2:
                printf("Ban da chon chuc nang 2. Tim uoc so chung va boi so chung cua 2 so \n");
                break;
            case 3:
                printf("Ban da chon chuc nang 3. Chuong trinh tinh tien cho quan Karaoke \n");
                break;
            case 4:
                printf("Ban da chon chuc nang 4. Tinh tien dien \n");
                break;
            case 5: 
                printf("Ban da chon chuc nang 5. Chuc nang doi tien \n");
                break;
            case 6:
                printf("Ban da chon chuc nang 6. Chuc nang tinh lai suat vay ngan hang vay tra gop \n");
                break;
            case 7: 
                printf("Ban da chon chuc nang 7. Chuong trinh vay tien mua xe \n");
                break;
            case 8:
                printf("Ban da chon chuc nang 8. Sap xep thong tin sinh vien \n");
                break;
            case 9: 
                printf("Ban da chon chuc nang 9. Game FPOLY-LOTT (2/15) \n");
                break;
            case 10:
                printf("Ban da chon chuc nang 10. Chuong trinh tinh toan phan so \n");
                break;
            case 11:
                printf("Ban da chon chuc nang 11. Thoat chuong trinh \n");
                break;
            default:
                printf("Khong co chuc nang nay! Moi chon lai. \n");
                break;
        }
    } while (choice != 11);
    
    return 0;
}