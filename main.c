//nome:Davi Lima da Silva - Prontu�rio: GU3020371
//nome:Guilherme Alves Pereira - Prontu�rio: GU3022021
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

    FILE *arquivo;
    arquivo = fopen("dados.bin", "ab");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
        dados = (int*) malloc (n * sizeof(int));
        system("cls");
        printf("Informe %d� nome \n",x+1);
        getchar();
        gets(func.nome);
        printf("Infome o ID de sua conta\n");
        scanf("%d", &func.id);
        printf("Informe o saldo da sua conta\n");
        scanf("%f", &func.saldo);
        printf("Informe o tipo de sua conta\n");
        printf("1 - Conta corrente\n");
        printf("2 - Conta poupan�a\n");
        scanf("%d",&func.tipoConta);
        fwrite(coleta,sizeof(int),100,arquivo);
        switch(func.tipoConta){
        case 1:
            system("cls");
            printf("O saldo da sua conta corrente � R$:%.2f\n",func.saldo);
            printf("Deseja adicionar mais saldo?\n");
            printf("1 - Sim\n");
            printf("2 - N�o\n");
            scanf("%d", &mais_saldo);
            switch(mais_saldo){
            case 1:// switch case para adicionar saldo
                printf("Quanto deseja adicionar?\n");
                scanf("%f",&soma_saldo);
                printf(".");
                delay(3);
                printf(".");
                delay(5);
                printf(".");
                delay(5);
                system("cls");
               //funcao de delay
                printf("\nSaldo adicionado com sucesso!\n");
                delay(5);
                soma_saldo= soma_saldo + func.saldo;
                printf("Seu saldo agora � R$:%.2f\n",soma_saldo);
                fclose(arquivo);
                system("pause");
                            break;

                                case 2:
                                    menu();
                                    fclose(arquivo);
                                    system("cls");

                            break;
                         default:
                             fclose(arquivo);
                             exit(1);
                                }// fim da op��o de adicionar saldo a conta


        break;
        case 2:
            system("cls");
            printf("O saldo da sua conta poupan�a � R$:%.2f\n",func.saldo);
            printf("Deseja adicionar mais saldo?\n");
            printf("1 - Sim\n");
            printf("2 - N�o\n");
            scanf("%d", &mais_saldo);
            switch(mais_saldo){
            case 1:// switch case para adicionar saldo
                printf("Quanto deseja adicionar?\n");
                scanf("%f",&soma_saldo);
                printf(".");
                delay(3);
                printf(".");
                delay(5);
                printf(".");
                delay(5);
                system("cls");
               //funcao de delay
                printf("\nSaldo adicionado com sucesso!\n");
                delay(5);
                soma_saldo= soma_saldo + func.saldo;
                printf("Seu saldo agora � R$:%.2f\n",soma_saldo);
                system("pause");
                fclose(arquivo);
                            break;
                                case 2:
                                        menu();
                                        fclose(arquivo);
                            break;
                         default:
                             fclose(arquivo);
                             exit(1);
                                }// fim da op��o de adicionar saldo a conta
        break;
        default:
            fclose(arquivo);
            exit(1);
        }
    }
void delay( int a){
    int add, time, i;
    time= a * 100000000;
    for (i=0; i<time;i++){
        add*=1;
        add++;
        add++;
    }
}
void consultar_dados(int n){
    //segunda op��o
}
void menu(){
    int opcao=0,saida=1;
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
    fclose(file); // imagem de bem vindo


    while(saida){ // inicio do menu
    printf("\nDigite a op��o desejada");
    printf("\n\n");
    printf("1 - Abrir conta");
    printf("\n2 - ver conta");
    printf("\n3 - sair\n");
    scanf("%d", &opcao);
    system("cls");
    if(opcao == 1){
    printf("\nDigite a quantidade de contas que ser� cadastrada\n");
    scanf("%d",&n);
    CONTA func[n];
    for(i=0;i<n;i++){
        func[i]= coleta();
        system("cls");
    }
        saida++;
        }else if(opcao == 2){

        //funcao de visualiza��o
    }else{
        exit(1);
        }
    }

}
void main (){
    setlocale(LC_ALL,"");
    system("color F0");
    menu();


}
