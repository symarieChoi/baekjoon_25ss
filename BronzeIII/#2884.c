#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);
    if (H > 0)
    {
        if (M >= 45)
        {
            printf("%d %d", H, M - 45);
        }
        else if (M < 45)
        {
            printf("%d %d", H - 1, 60 - (45 - M));
        }
    }
    else
    {
        if (M >= 45)
        {
            printf("%d %d", H, M - 45);
        }
        else if (M < 45)
        {
            printf("%d %d", 23, 60 - (45 - M));
        }
    }

    return 0;
}