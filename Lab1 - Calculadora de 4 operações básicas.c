#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char menu_display (){
    int seletor;
    printf("_________________________________\n"
           "|                               |\n"
           "| Digite o id referente a       |\n"
           "| opera��o que deseja executar. |\n"
           "|_______________________________|\n"
           "|                               |\n"
           "| ID - Op��o                    |\n"
           "|                               |\n"
           "|  1 - Adi��o                   |\n"
           "|  2 - Subtra��o                |\n"
           "|  3 - Multiplica��o            |\n"
           "|  4 - Divis�o                  |\n"
           "|                               |\n"
           "|  5 - Sair                     |\n"
           "|                               |\n"
           "|  Obs:                         |\n"
           "|  Para N� float usa-se v�rgula |\n"
           "|_______________________________|\n");

    printf("Digite o ID da opera��o: ");
    scanf("%i", &seletor);

    return seletor;
}

float calculadora(int seletor) {
    float n1, n2, resultado = -1;

    switch (seletor) {
            case 1:
                printf("Digite o primeiro n�mero da opera��o: ");
                scanf("%f", &n1);

                printf("Digite o segundo n�mero da opera��o: ");
                scanf("%f", &n2);

                resultado = n1 + n2;
                break;

            case 2:
                printf("Digite o primeiro n�mero da opera��o: ");
                scanf("%f", &n1);

                printf("Digite o segundo n�mero da opera��o: ");
                scanf("%f", &n2);

                resultado = n1 - n2;
                break;

            case 3:
                printf("Digite o primeiro n�mero da opera��o: ");
                scanf("%f", &n1);

                printf("Digite o segundo n�mero da opera��o: ");
                scanf("%f", &n2);

                resultado = n1 * n2;
                break;

            case 4:
                printf("Digite o primeiro n�mero da opera��o: ");
                scanf("%f", &n1);

                printf("Digite o segundo n�mero da opera��o: ");
                scanf("%f", &n2);

                resultado = n1 / n2;
                break;

            case 5:
                printf("\nSaindo...\n");
                break;

            default:
                printf("Voc� n�o digitou uma op��o v�lida\n\n");

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
