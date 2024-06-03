#include <stdio.h>
int numberDoubled(int num){
    return num*2;
}
int main(){
    int input=0;
    scanf("%d",&input);
    printf("-->  %d",numberDoubled(input));
}
