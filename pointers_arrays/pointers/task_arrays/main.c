#include <stdio.h>

int main ()
{
    int a[5], i;
    int *q = a;

    printf("Enter values\n");
    for (i = 0; i < 5; i++)
        scanf("%d\n", &a[i]); /*(a + i), (i + a), (q + i)*/
    
    printf("Here is a list of values\n");
    for (i = 0; i < 5; i++)
        printf("%d\n", a[i]); /*a[i] == *(q + i) == *(a + i)*/
}