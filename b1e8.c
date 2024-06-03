#include <stdio.h>
#include <math.h>

float CalcHipotenusa(float a,float b){
    float soma=0;
    soma=((a*a)+(b*b));
    printf("soma -> %.1f \n",soma);
    return sqrt(soma);
}

int main(){
    float a=0,b=0;
    printf("a -->");
    scanf("%f",&a);
    printf("b -->");
    scanf("%f",&b);
    printf("-=-> %.2f",CalcHipotenusa(a,b));
}
