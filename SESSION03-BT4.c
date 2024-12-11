#include<stdio.h>
int main (){
    float mathScore, literatureScore, englishScore;
    printf("nhap vao diem toan :");
    scanf("%f",&mathScore);
    printf("nhap vao diem van :");
    scanf("%f",&literatureScore);
    printf("nhap vao diem anh :");
    scanf("%f",&englishScore);
    float tongDiem= mathScore + literatureScore + englishScore;
    float diemTrungBinh= (mathScore + literatureScore + englishScore)/3.0;
    printf("tong diem cua ba mon la : %.2f\n", tongDiem);
    printf("diem trung binh cua ba mon la : %.2f",diemTrungBinh);
    return 0 ;
}