#include <stdio.h>

int main() {

    float x = 0, y = 0, resultado = 0;
    int op, continuar;

    do {

        printf("\n\t1 - Soma");
        printf("\n\t2 - Subtracao");
        printf("\n\t3 - Multiplicacao");
        printf("\n\t4 - Divisao");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &op);

        if(op < 1 || op > 4){
            printf("\nOpcao invalida!\n");
            continue;
        }

        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);

        printf("Digite o segundo numero: ");
        scanf("%f", &y);

        switch(op){

            case 1:
                resultado = x + y;
                break;

            case 2:
                resultado = x - y;
                break;

            case 3:
                resultado = x * y;
                break;

            case 4:
                if(y != 0)
                    resultado = x / y;
                else{
                    printf("\nErro: divisao por zero!\n");
                    continue;
                }
                break;
        }

        printf("\nResultado = %.2f\n", resultado);

        printf("\nDigite 1 para continuar ou qualquer outro numero para sair: ");
        scanf("%d", &continuar);

    } while(continuar == 1);

    return 0;
}
