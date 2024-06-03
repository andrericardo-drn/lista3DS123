#include <stdio.h>
#include <math.h>
#include <string.h>

float CalcMedia(int nota1,int nota2,int nota3,char letra){
if(letra=='a'){
    return (float)(nota1+nota2+nota3)/3.0;
}else if(letra=='p'){
    return (float)((nota1*0.5)+(nota2*0.3)+(nota3*0.2));
}
}

int main(){
int nota1,nota2,nota3;
char letra;
scanf("%d",&nota1);
printf("nota 1 -> %d \n",nota1);
scanf("%d",&nota2);
printf("nota 2 -> %d \n",nota2);
scanf("%d",&nota3);
printf("nota 3 -> %d \n",nota3);
getchar();
scanf("%c",&letra);
printf("letra -> %c \n",letra);
printf("%.1f",CalcMedia(nota1,nota2,nota3,letra));
}
