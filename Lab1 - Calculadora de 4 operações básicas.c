#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char menu_display (){
    int seletor;
    printf("_________________________________\n"
           "|                               |\n"
           "| Digite o id referente a       |\n"
           "| operação que deseja executar. |\n"
           "|_______________________________|\n"
           "|                               |\n"
           "| ID - Opção                    |\n"
           "|                               |\n"
           "|  1 - Adição                   |\n"
           "|  2 - Subtração                |\n"
           "|  3 - Multiplicação            |\n"
           "|  4 - Divisão                  |\n"
           "|                               |\n"
           "|  5 - Sair                     |\n"
           "|                               |\n"
           "|  Obs:                         |\n"
           "|  Para Nº float usa-se vírgula |\n"
           "|_______________________________|\n");

    printf("Digite o ID da operação: ");
    scanf("%i", &seletor);

    return seletor;
}

float calculadora(int seletor) {
    float n1, n2, resultado = -1;

    switch (seletor) {
            case 1:
                printf("Digite o primeiro número da operação: ");
                scanf("%f", &n1);

                printf("Digite o segundo número da operação: ");
                scanf("%f", &n2);

                resultado = n1 + n2;
                break;

            case 2:
                printf("Digite o primeiro número da operação: ");
                scanf("%f", &n1);

                printf("Digite o segundo número da operação: ");
                scanf("%f", &n2);

                resultado = n1 - n2;
                break;

            case 3:
                printf("Digite o primeiro número da operação: ");
                scanf("%f", &n1);

                printf("Digite o segundo número da operação: ");
                scanf("%f", &n2);

                resultado = n1 * n2;
                break;

            case 4:
                printf("Digite o primeiro número da operação: ");
                scanf("%f", &n1);

                printf("Digite o segundo número da operação: ");
                scanf("%f", &n2);

                resultado = n1 / n2;
                break;

            case 5:
                printf("\nSaindo...\n");
                break;

            default:
                printf("Você não digitou uma opção válida\n\n");

        }

    return resultado;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int seletorDeOpcoes;
    float resultadoFinal;

    while(1) {
        seletorDeOpcoes = 0;
        resultadoFinal = 0;

        seletorDeOpcoes = menu_display();

        resultadoFinal = calculadora(seletorDeOpcoes);

        if(seletorDeOpcoes == 5){
            break;
        }else if(resultadoFinal == -1) {
            printf("\nSem resultado\n\n");
            system("PAUSE");
        }else{
            printf("\nResultado = %.2f\n\n", resultadoFinal);
            system("PAUSE");
        }
    }


    return 0;
}
