#include <stdio.h>
#include <math.h>

float ConvertToFahrenheit(float num){
    return (num*(9.0/5.0)+32.0);
}

int main(){
    float temp;
    scanf("%f",&temp);
    printf("%.1f",ConvertToFahrenheit(temp));

}
