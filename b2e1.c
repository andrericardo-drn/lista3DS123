#include <stdio.h>
#include <string.h>

int main() {
    char letra;
    char a = 'a';
    char b = 'b';
    scanf("%c", &letra);
    printf("letra ----------> %c \n", letra);
    if (strcmp(letra, 'a') == 0) {
        printf("letra A\n");
    } else if (strcmp(letra, 'b') == 0) {
        printf("letra B\n");
    }
    return 0;
}
