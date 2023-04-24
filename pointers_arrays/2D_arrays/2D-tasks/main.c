#include <stdio.h>

int main()
{
    int a[2][3];
    int i, j;

    printf("Enter the 2D-elements\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("%d\n", a[i][j]);
    }
}
/**
 * ROW MAJOR IMPLEMENTATION
 * Base + ((i * n) + j) * 4
 */