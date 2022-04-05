#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct dados(){
    char nome[100];
    int id;
    float saldo;
    int tipoConta;
}

int main (){
    setlocale(LC_ALL,"");
    printf("Olá mundo!\n");
    system("color F0");
    system("pause");

    return;
}
