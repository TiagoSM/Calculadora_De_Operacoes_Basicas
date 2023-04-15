#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

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

double exponenciar (double num1, double num2){
    return (pow(num1,num2));
}

double raizQuadrada (double num1, double num2){
    return (sqrt(num1));
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 0A");
    int opcao, saida;
    double num1, num2, resultado;

    do{
    printf("\nCalculadora de operações básicas\n\n\n");
    printf("--------------------------------\n");
    printf("Digite o valor do primeiro número: ");
    scanf("%lf", &num1);
    setbuf(stdin, NULL);
    printf("--------------------------------\n");
    printf("\nEscolha uma das operações: \n\n");
    printf("1-Soma.\n");
    printf("2-Divisão.\n");
    printf("3-Multiplicação.\n");
    printf("4-Subtração.\n");
    printf("5-Resto de uma divisão.\n");
    printf("6-Exponenciação.\n");
    printf("7-Raiz Quadrada.\n");
    scanf("%d", &opcao);
    if(opcao != 7){
        printf("--------------------------------\n");
        printf("Digite o valor do segundo número: ");
        scanf("%lf", &num2);
        setbuf(stdin, NULL);
    }
    setbuf(stdin, NULL);
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
    case 6:
        resultado=exponenciar(num1, num2);
        printf("\nO resultado da exponenciação é: %.2lf\n", resultado);
        break;
    case 7:
        resultado=raizQuadrada(num1, num2);
        printf("\nA raiz quadrada é: %f\n", resultado);
        break;
    default:
        printf("\nEscolha uma das opções acima!!!\n\n");

    }
    system("pause");
    system("cls");
    do{
        printf("Digite 1 para fazer mais uma conta.\n");
        printf("Digite 2 para fechar a calculadora.\n");
        scanf("%d", &saida);
        setbuf(stdin, NULL);
        switch(saida){
            case 1:
                system("cls");
                break;
            case 2:
                system("cls");
                break;
            default:
               printf("Opção Inválida!");
        }
        }while(saida != 1 && saida != 2);
    }while(saida != 2);
    return 0;
}
