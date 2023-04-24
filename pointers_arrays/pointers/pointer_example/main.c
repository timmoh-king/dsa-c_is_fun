#include <stdio.h>

int main()
{
    int a[] = {6, 2, 1, 5, 3};
    int *q = a;
    *q = a[4];

    printf("%d\n", *q);
    printf("%d\n", a[2]);
    printf("%d\n", *(a+3));
    printf("%d\n", *a+1);

    for (int i = 0; i < sizeof(a); i++)
        printf("%d\n", a[i]);
}