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
    printf("\nCalculadora de operações básicas\n\n\n");
    printf("--------------------------------\n");
    printf("Digite o valor do primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o valor do segundo número: ");
    scanf("%lf", &num2);
    printf("--------------------------------\n");
    printf("\nEscolha uma das operações: \n\n");
    printf("1-Soma.\n");
    printf("2-Divisão.\n");
    printf("3-Multiplicação.\n");
    printf("4-Subtração.\n");
    printf("5-Resto de uma divisão.\n");
    scanf("%d", &opcao);
    printf("--------------------------------\n");
    switch(opcao){
    case 1:
        resultado=soma(num1, num2);
        printf("\nO resultado da soma é: %.2lf\n", resultado);
        break;
    case 2:
        if (num2==0){
            printf("\nNão é possível dividir por 0\n");
        }

        else {
                resultado=dividir(num1, num2);
                printf("\nO resultado da divisão é: %.2lf\n", resultado);
        }
        break;

    case 3:
        resultado=multipicar(num1, num2);
        printf("\nO resultado da multiplicação é: %.2lf\n", resultado);
        break;
    case 4:
        resultado=subtrair(num1, num2);
        printf("\nO resultado da subtração é: %.2lf\n", resultado);
        break;
    case 5:
        resultado=resto(num1, num2);
        printf("\nO resto da divisão é: %.2lf\n", resultado);
        break;
    default:
        printf("\nEscolha uma das opções acima!!!\n\n");

    }
    system("pause");
    return 0;
}
