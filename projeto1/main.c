#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool error = false;

void menu(int *opt)
{
    printf("===============================\n");
    printf("   Calculadora Simples   \n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
    scanf("%d", opt);
}

void soma()
{
    int a;
    int b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Resultado: %d + %d = %d\n", a, b, a + b);
}

void sub()
{
    int a;
    int b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Resultado: %d - %d = %d\n", a, b, b - a);
}

void mult()
{
    int a;
    int b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Resultado: %d * %d = %d\n", a, b, a * b);
}

void div()
{
    float a;
    float b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    if(b == 0){
        printf(" Erro: Divisão por zero não é permitida.\n");
        error = true;
    }else{
        printf("Resultado: %.0f / %.0f = %.2f\n", a, b, a / b);
    }
}

int main()
{
    int opt;
    char opcao;

    menu(&opt);
    do
    {
        if (opt == 1)
        {
            soma();
            printf("blcoo 1Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &opcao);
            if (opcao == 'n')
            {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                break;
            } else if(opcao == 's'){
                 menu(&opt);
            }
        }
        if (opt == 2)
        {
            sub();
            printf("blcoo 1Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &opcao);
            if (opcao == 'n')
            {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                break;
            }else if(opcao == 's'){
                 menu(&opt);
            }
        }
        if (opt == 3)
        {
            mult();
            printf("blcoo 1Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &opcao);
            if (opcao == 'n')
            {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                break;
            }else if(opcao == 's'){
                 menu(&opt);
            }
        }
        if (opt == 4)
        {
            div();
            printf("blcoo 1Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &opcao);
            if (opcao == 'n')
            {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                break;
            }else if(opcao == 's'){
                 menu(&opt);
            }
        }
        if(opt > 5){
            printf("Selecione uma operação:\n");
            printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
            printf("\nSelecione a opcao correta mostrada acima: ");
            scanf("%d", &opt);
        }

    } while (opt != 5);

    return 0;
}
