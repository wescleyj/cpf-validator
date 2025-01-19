#include <stdio.h>
#include <string.h>

int main(void)
{
    char cpf[15];
    int numeros[11];
    int i, soma, verificador1, verificador2;

    while (1)
    {
        printf("Digite um CPF: ");
        if (scanf("%s", cpf) == EOF)
        {
            break;
        }

        int len = 0, j = 0;

        // Filtrar apenas os números do CPF
        for (i = 0; cpf[i] != '\0'; i++)
        {
            if (cpf[i] >= '0' && cpf[i] <= '9')
            {
                numeros[len++] = cpf[i] - '0';
            }
        }

        // Verificar se tem exatamente 11 números
        if (len != 11)
        {
            printf("CPF invalido\n");
            continue;
        }

        // Cálculo do primeiro dígito verificador
        soma = 0;
        for (i = 0; i < 9; i++)
        {
            soma += numeros[i] * (10 - i);
        }
        verificador1 = (soma % 11 < 2) ? 0 : 11 - (soma % 11);

        // Verificar primeiro dígito
        if (verificador1 != numeros[9])
        {
            printf("CPF invalido\n");
            continue;
        }

        // Cálculo do segundo dígito verificador
        soma = 0;
        for (i = 0; i < 10; i++)
        {
            soma += numeros[i] * (11 - i);
        }
        verificador2 = (soma % 11 < 2) ? 0 : 11 - (soma % 11);

        // Verificar segundo dígito
        if (verificador2 != numeros[10])
        {
            printf("CPF invalido\n");
        }
        else
        {
            printf("CPF valido\n");
        }
    }

    return 0;
}
