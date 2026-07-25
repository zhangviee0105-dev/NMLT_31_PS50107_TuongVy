#include <stdio.h>
int main (){
    
    float Toan, Ly, Hoa;
    float diemTrungBinh;
    printf ("Nhap diem Toan, Ly, Hoa: ");
    scanf("%f %f %f", &Toan,&Ly,&Hoa);
    diemTrungBinh = (Toan*3+Ly*2+Hoa)/6.0;
    printf ("diemTrungBinh: %.2f\nToan: %.2f\nLy %.2f\nHoa: %.2f\n",diemTrungBinh,Toan,Ly,Hoa);


    return 0;

}