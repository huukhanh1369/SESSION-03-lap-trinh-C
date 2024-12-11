#include<stdio.h>
int main (){
    float canh, chieuCao, S;
    printf("nhap vao do dai cua canh tam giac : ");
    scanf("%f",&canh);
    printf("nhap vao chieu cao cua tam giac : ");
    scanf("%f",&chieuCao);
    S= 1/2 * canh * chieuCao;
    printf("dien tich cua tam giac la : %.2f",S);
    return 0 ;
}