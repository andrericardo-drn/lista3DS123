#include <stdio.h>
int isPositive(int num){
    if(num>0){
        return 1;
    }
    else if(num<0){
        return -1;
    }
    else{
        return 0;
    }
}
int main(){
    int input=0;
    scanf("%d",&input);
    if(isPositive(input)==1){
        printf("numero positivo");
    }
    else if(isPositive(input)==-1){
        printf("numero negativo");
    }
    else if(isPositive(input)==0){
        printf("numero igual a zero");
    }

}
