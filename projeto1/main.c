#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

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

float lerFloat(const char *mensagem)
{
    float valor;
    while (1)
    {
        printf("%s", mensagem);
        if (scanf("%f", &valor) == 1)
        {
            limparBuffer();
            return valor;
        }
        else
        {
            printf("Entrada invalida! Digite um numero válido.\n");
            limparBuffer();
        }
    }
}

void soma()
{
    float a = lerFloat("Digite o primeiro numero: ");
    float b = lerFloat("Digite o segundo numero: ");
    printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
}

void sub()
{
    float a = lerFloat("Digite o primeiro numero: ");
    float b = lerFloat("Digite o segundo numero: ");
    printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);
}

void mult()
{
    float a = lerFloat("Digite o primeiro numero: ");
    float b = lerFloat("Digite o segundo numero: ");
    printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a * b);
}

void divi()
{
    float a = lerFloat("Digite o primeiro numero: ");
    float b;
    do
    {
        b = lerFloat("Digite o segundo numero: ");
        if (b == 0)
            printf("Erro: Divisão por zero não é permitida. Tente novamente.\n");
    } while (b == 0);

    printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);
}

int main()
{
    int opt;
    char opcao;

    menu(&opt);
    do
    {
        switch (opt)
        {
            case 1: soma(); break;
            case 2: sub(); break;
            case 3: mult(); break;
            case 4: divi(); break;
            case 5: 
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &opcao);
        opcao = tolower(opcao);
        limparBuffer();

        while (opcao != 's' && opcao != 'n')
        {
            printf("Resposta inválida. Digite 's' para sim ou 'n' para não: ");
            scanf(" %c", &opcao);
            opcao = tolower(opcao);
            limparBuffer();
        }

        if (opcao == 's')
            menu(&opt);

    } while (opcao == 's');

    printf("Obrigado por usar a calculadora! Até a próxima.\n");
    return 0;
}