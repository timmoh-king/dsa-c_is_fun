#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[50], size;

    /*Traversal - visiting every element of the array once*/
    printf("Enter the number items you want:\n");
    scanf("%d", &size);
    if (size <= sizeof(a))
    {
        printf("Enter fruit ID you want to buy:\n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("The item ID you entered are:\n");
        for (int i = 0; i < size; i++)
            printf("%d\n", a[i]);
    }
    else{
        printf("Maximum number is 200\n");
    }
}