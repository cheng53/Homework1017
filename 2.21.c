#include <stdio.h>
#include <stdlib.h>

int main() {

    // ���L���
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i == 0 || i == (9 - 1) || j == 0 || j == (9 - 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    //���L����

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (i == 0 || i == (9 - 1))
            {
                for (j = 0; j < 9; j++)
                {
                    if (j < 3 || j > 5)
                        printf(" ");
                    else
                        printf("*");
                }
                printf("\n");
            }
            else if (i == 1 || i == 7)
            {
                for (j = 0; j < 9; j++)
                {
                    if (j == 1 || j == 7)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            else
            {
                for (j = 0; j < 9; j++)
                {
                    if (j == 0 || j == 8)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
    }
    printf("\n");

    //���L�b�Y
    for (int i = 0; i < 9; i++)
    {
        if (i < 3)
        {
            for (int j = 0; j < (4 - i); j++)
            {
                printf(" ");
            }
            for (int k = 0; k < (2 * (i + 1) - 1); k++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 4; j++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
        }

    }
    printf("\n");

    //���L�٧�
    for (int i = 0; i < 9; i++)
    {
        if (i == 0 || i == 8)
        {
            for (int j = 0; j < 4; j++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            continue;
        }

        if (i < 5)
        {
            for (int k = i; k < 4; k++)
            {
                printf(" ");
            }
            printf("*");

            for (int l = 0; l < (2 * i - 1); l++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else
        {
            for (int k = (i - 4); k > 0; k--)
            {
                printf(" ");
            }
            printf("*");
            for (int l = 2 * (8 - i) - 1; l > 0; l--)
            {
                printf(" ");
            }
            printf("*\n");
        }

    }
    return 0;
}