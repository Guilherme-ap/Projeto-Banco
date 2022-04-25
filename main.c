#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int n,i;
typedef struct conta{
    char nome[100];
    int id;
    float saldo;
    int tipoConta;
} CONTA;
CONTA coleta();
CONTA coleta(){
    CONTA func;
    int *dados,x,mais_saldo;
    float soma_saldo;
    char volta_menu;

    dados = (int*) malloc (n * sizeof(int));
        system("cls");
        printf("Informe %dº nome \n",x+1);
        getchar();
        gets(func.nome);
        printf("Infome o ID de sua conta\n");
        scanf("%d", &func.id);
        printf("Informe o saldo da sua conta\n");
        scanf("%f", &func.saldo);
        printf("Informe o tipo de sua conta\n");
        printf("1 - Conta corrente\n");
        printf("2 - Conta poupança\n");
        scanf("%d",&func.tipoConta);
        switch(func.tipoConta){
        case 1:
            system("cls");
            printf("O saldo da sua conta corrente é R$:%.2f\n",func.saldo);
            printf("Deseja adicionar mais saldo?\n");
            printf("1 - Sim\n");
            printf("2 - Não\n");
            scanf("%d", &mais_saldo);
            switch(mais_saldo){
            case 1:// switch case para adicionar saldo
                printf("Quanto deseja adicionar?\n");
                scanf("%f",&soma_saldo);
                //funcao de delay
                printf("\nSaldo adicionado com sucesso!\n");
                soma_saldo= soma_saldo + func.saldo;
                printf("Seu saldo agora é R$:%.2f\n",soma_saldo);
                system("pause");
                            break;
                                case 2:
                                    system("cls");
                                    printf("\nDeseja voltar para o menu?\n");
                                    printf("Y/N\n");
                                    scanf("%c", volta_menu);
                                    if(volta_menu == 'Y'){
                                            system("cls");
                                        menu();

                                    }else {
                                        exit(1);
                                    }
                             //   continue;
                            break;
                         //  default:
                              //  continue;
                                }// fim da opção de adicionar saldo a conta
        system("pause");
        break;
        case 2:
            printf("O saldo da sua conta poupança é R$:%.2f\n",func.saldo);
        break;
        default:
            exit(1);
        }
    return func;
    system("cls");
    }
void consultar_dados(int n){
    //segunda opção
}
void menu(){
    int opcao,saida ;
    FILE *file;
    file = fopen("davizola.bin", "rb");
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
    fclose(file); // imagem de bem vindo


    while(1){ // inicio do menu
    printf("\nDigite a opção desejada");
    printf("\n\n");
    printf("1 - Abrir conta");
    printf("\n2 - ver conta");
    printf("\n3 - sair\n");
    scanf("%d", &opcao);
    switch(opcao){
    case 1: //funcao de cadastro

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
void main (){
    setlocale(LC_ALL,"");
    system("color F0");
    menu();
    printf("\nDigite a quantidade de contas que será cadastrada\n");
    scanf("%d",&n);
    CONTA func[n];
    for(i=0;i<n;i++){
        func[i]= coleta();
        system("cls");
    }

}
