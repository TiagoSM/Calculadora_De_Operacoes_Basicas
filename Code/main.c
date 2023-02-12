#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double soma(double num1, double num2){
    return num1 + num2;
}

double dividir(double num1, double num2){
    return num1 / num2;
}

double multipicar(double num1, double num2){
    return num1*num2;
}

double subtrair(double num1, double num2){
    return num1-num2;
};

double resto(double num1, double num2){
    return (num1*num2)/100;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");
    int opcao;
    double num1, num2, resultado;
    printf("\nCalculadora de opera��es b�sicas\n\n\n");
    printf("--------------------------------\n");
    printf("Digite o valor do primeiro n�mero: ");
    scanf("%lf", &num1);
    printf("Digite o valor do segundo n�mero: ");
    scanf("%lf", &num2);
    printf("--------------------------------\n");
    printf("\nEscolha uma das opera��es: \n\n");
    printf("1-Soma.\n");
    printf("2-Divis�o.\n");
    printf("3-Multiplica��o.\n");
    printf("4-Subtra��o.\n");
    printf("5-Resto de uma divis�o.\n");
    scanf("%d", &opcao);
    printf("--------------------------------\n");
    switch(opcao){
    case 1:
        resultado=soma(num1, num2);
        printf("\nO resultado da soma �: %.2lf\n", resultado);
        break;
    case 2:
        if (num2==0){
            printf("\nN�o � poss�vel dividir por 0\n");
        }

        else {
                resultado=dividir(num1, num2);
                printf("\nO resultado da divis�o �: %.2lf\n", resultado);
        }
        break;

    case 3:
        resultado=multipicar(num1, num2);
        printf("\nO resultado da multiplica��o �: %.2lf\n", resultado);
        break;
    case 4:
        resultado=subtrair(num1, num2);
        printf("\nO resultado da subtra��o �: %.2lf\n", resultado);
        break;
    case 5:
        resultado=resto(num1, num2);
        printf("\nO resto da divis�o �: %.2lf\n", resultado);
        break;
    default:
        printf("\nEscolha uma das op��es acima!!!\n\n");

    }
    system("pause");
    return 0;
}
