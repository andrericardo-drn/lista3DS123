#include <stdio.h>
#include <math.h>

int ConvertTimetoSec(int hour,int min,int sec){
    int totalSec = hour * 3600 + min * 60 + sec;
  return totalSec;
}

int main(){
    int hour=0,min=0,sec=0;
    printf("-->");
    scanf("%d",&hour);
    printf("-->");
    scanf("%d",&min);
    printf("-->");
    scanf("%d",&sec);
    printf("total sec -> %d",ConvertTimetoSec(hour,min,sec));
}
