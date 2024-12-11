#include<stdio.h>
#include<math.h>
const float pi = 3.14;
int main (){
    float radius,s,cv;
    printf("hay nhap vao ban kinh hinh tron :");
    scanf("%f",&radius);
    s = pi * pow(radius,2);
    cv= 2 * pi * radius;
    printf ("dien tich cua hinh tron la : %.2f\n",s);
    printf (" chu vi cua hinh tron la : %.2f",cv);
    return 0;
}