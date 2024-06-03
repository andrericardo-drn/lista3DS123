#include <stdio.h>
#include <math.h>

float CalcCilinderVol(float height,float radius){
    float pi=M_PI;
    return (pi*(radius*radius)*height);
}

int main(){
    float raio=0;
    float altura=0;
    printf("raio --->");
    scanf("%f",&raio);
    printf("altura --->");
    scanf("%f",&altura);
    printf("%.2f",CalcCilinderVol(altura,raio));
}
