#include <stdio.h>
#include <stdbool.h>
#include <string.h>



void limparBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void menu(int *opt)
{
    printf("===============================\n");
    printf("   Calculadora Simples   \n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
    scanf("%d", opt);
    limparBuffer();
}

void soma()
{
    float a;
    float b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
}

void sub()
{
    float a;
    float b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %.2f - %.2f = %.2f\n", b, a, b - a);
}

void mult()
{
    float a;
    float b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a * b);
}

void div()
{
    float a;
    float b;
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    limparBuffer();

    if (b == 0)
    {
        printf(" Erro: Divisão por zero não é permitida.\n");
    
    }
    else
    {
        printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);
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
            printf("Deseja realizar outra operação? (y/n): ");
            scanf(" %c", &opcao);
            if (opcao == 'n')
            {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                break;
            }
            else if (opcao == 's')
            {
                menu(&opt);
            }
        }
        if (opt == 2)
        {
            sub();
            printf("Deseja realizar outra operação? (y/n): ");
            scanf(" %c", &opcao);
            limparBuffer();

            if (opcao == 'n')
            {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                break;
            }
            else if (opcao == 'y')
            {
                menu(&opt);
            }
            else
            {
                while (opcao != 'y' && opcao != 'n')
                {
                    printf("Sua opcao esta incorreta, digite y para sim ou n pra nao: ");
                    scanf(" %c", &opcao);
                }
            }
        }
        if (opt == 3)
        {
            mult();
            printf("Deseja realizar outra operação? (y/n): ");
            scanf(" %c", &opcao);
            if (opcao == 'n')
            {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                break;
            }
            else if (opcao == 's')
            {
                menu(&opt);
            }
        }
        if (opt == 4)
        {
            div();
            printf("Deseja realizar outra operação? (s/n): ");
            scanf(" %c", &opcao);
            if (opcao == 'n')
            {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                break;
            }
            else if (opcao == 's')
            {
                menu(&opt);
                limparBuffer();
            }
        }
        if (opt > 5 || opt < 5)
        {
            printf("Selecione uma operação:\n");
            printf("1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpção: ");
            printf("\nSelecione a opcao correta mostrada acima: ");
            scanf("%d", &opt);
            limparBuffer();
        }

    } while (opt != 5);

    return 0;
}