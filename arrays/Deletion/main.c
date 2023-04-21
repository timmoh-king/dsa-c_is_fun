#include <stdio.h>

int main()
{
    int a[50], size, pos, i;

    printf("Enter the number of items you want:\n");
    scanf("%d", &size);
    if (size > sizeof(a))
    {
        printf("Maximum number is 200\n");
    }
    else
    {
        printf("Enter fruit ID you want to buy:\n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &a[i]);
        }
        printf("The item ID you entered are:\n");
        for (int i = 0; i < size; i++)
            printf("%d\n", a[i]);
        printf("Enter position you want to delete new item ID:\n");
        scanf("%d", &pos);

        /*swapping so as to delete*/
        if (pos <= 0 || pos > size)
        {
            printf("invalid position\n");
        }else{
            for (i = pos-1; i < size - 1; i++)
            {
                a[i] = a[i + 1];
            }
            size--;
        }
        printf("The new list item ID is:\n");
        for (i = 0; i < size; i++)
            printf("%d\n", a[i]);
    }
}