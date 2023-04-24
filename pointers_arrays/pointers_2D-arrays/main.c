#include <stdio.h>

int main()
{
    int a[3][2];
    int *p;
    p = &a[0][0]; /*p = a[0]*/

    printf("%d", a); /*p / a / &a[0][0] / &a / *a*/
}