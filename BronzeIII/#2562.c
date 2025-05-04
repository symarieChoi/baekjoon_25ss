#include <stdio.h>

int main(void)
{
    int n[9];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &n[i]);
    }

    int max = n[0];
    int index = 0;
    for (int i = 0; i < 9; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
            index = i;
        }
    }

    printf("%d\n%d", max, index + 1);

    return 0;
}