#include <stdio.h>

int main()
{
    /*array_name[row][column]*/
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 12; i++)
    {
        printf("%d", a[i]);
        printf("%d", b[i]);
    }
}