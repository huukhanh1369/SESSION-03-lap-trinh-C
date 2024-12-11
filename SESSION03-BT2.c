#include<stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("hay nhap vao do celsius: ");
    scanf("%f",&celsius);
    fahrenheit = celsius*1.8 + 32;
    printf("so do cua fahrenheit la : %.2f ", fahrenheit);
    return 0 ;
}
