#include <stdio.h>

int main()
{

    int n, i, j, s = 0, sp = 0, b = 0, bp = 0, a = 0, ap = 0;
    float saq, blo, ata;
    scanf("%d", &n);
    int array[2][3];
    char name[20];
    while (n > 0)
    {
        fflush(stdin);
        scanf("%s", &name);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                scanf("%d", &array[i][j]);

                if (i == 0 && j == 0)
                    s = s + array[i][j];
                else if (i == 0 && j == 1)
                    b = b + array[i][j];
                else if (i == 0 && j == 2)
                    a = a + array[i][j];
                else if (i == 1 && j == 0)
                    sp = sp + array[i][j];
                else if (i == 1 && j == 1)
                    bp = bp + array[i][j];
                else if (i == 1 && j == 2)
                    ap = ap + array[i][j];
            }
        }

        n--;
    }

    saq = (sp * 100.00) / (float)s;
    blo = (bp * 100.00) / (float)b;
    ata = (ap * 100.00) / (float)a;

    printf("Pontos de Saque: %.2f %%.\n", saq);
    printf("Pontos de Bloqueio: %.2f %%.\n", blo);
    printf("Pontos de Ataque: %.2f %%.\n", ata);

    return 0;
}