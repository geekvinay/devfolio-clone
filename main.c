#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 20

int main()
{
    int i, j, size, matrix[MAX_SIZE][MAX_SIZE];

    while (scanf("%d", &size) != -1)
    {
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                scanf("%d", &matrix[i][j]);
            }
        }

        /*
         * Use the following printf statement if matrix is upper triangular
         */
        int flag = 0;
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                if (i > j && matrix[i][j] != 0)
                {
                    flag = 1;
                }
            }
        }
        if (flag != 1)
            printf("upper triangular\n");
        else
            printf("Not upper triangular\n");

        /*
         * Use the following printf statement if matrix is NOT upper triangular
         */
    }

    return 0;
}