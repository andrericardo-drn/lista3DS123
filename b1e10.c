#include <stdio.h>
#include <math.h>

int HigherNumber(int num1,int num2){
    if (num1>num2){
        return 1;
    }
    else if(num2>num1){
        return 2;
    }
    else{
        return 0;
    }
}

int main(){
    int number1=0,number2=0;
    printf("num1 -> ");
    scanf("%d",&number1);
    printf("num2 -> ");
    scanf("%d",&number2);
    if(HigherNumber(number1,number2)==1){
        printf("1 numero maior");
    }
    else if(HigherNumber(number1,number2)==2){
        printf("2 numero maior");
    }
    else if(HigherNumber(number1,number2)==0){
        printf("numeros iguais");
    }

}
