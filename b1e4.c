#include <stdio.h>
#include <math.h>

int isPerfSquare(int num){
    double sqr = sqrt(num);
    return ((int)sqr == sqr);
}

int main(){
    int num=0;
    scanf("%d",&num);
    if (isPerfSquare(num)) {
    printf("%d --> quadrado perfeito.\n", num);
  } else {
    printf("%d --> não e um quadrado perfeito.\n", num);
  }

}
