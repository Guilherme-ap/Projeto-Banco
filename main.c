#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

typedef struct conta{
    char nome[100];
    int id;
    float saldo;
    int tipoConta;
} CONTA;
void pegar_dados_cliente(int n){
    int x;
    for(x=0;x<n;x++){
        printf("\nDigite seus dados para a conta %d", x+1);

    }

}
void consultar_dados(int n){
    //segunda opção
}

void menu(int opcao, int saida = 0){
    while(saida == 1){
    printf("\nDigite a opção desejada");
    printf("\n\n");
    printf("1 - Abrir conta");
    printf("\n2 - ver conta");
    printf("\n3 - sair");
    scanf("%d", %opcao);
    switch(opcao){
    case 1:
        //funcao de cadastro
        saida++;
    break;
    case 2:
    //funcao de visualização
    saida++;
    break;
    case 3:
        exit(1);
        break;
    default:
        continue;
    }
    }

}

int main (){
    int n;
    setlocale(LC_ALL,"");
    system("color F0");
    system("pause");
    FILE *file;
    file = fopen("davizola.txt", "r");
     if(file == NULL){
        printf("\nErro na abertura");
        system("pause");
        exit(1);
    }
    char c=fgetc(file);;
    while(c !=EOF){
        printf("%c",c);
        c= fgetc(file);
    }

    printf("\n\n");
    system("pause");
    fclose(file);
    return;
}
