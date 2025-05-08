#include <stdio.h>

int main(void)
{
    int H, M; // 요리 시작 시간
    scanf("%d %d", &H, &M);

    int T; // 요리하는 데 걸리는 시간(분분)
    scanf("%d", &T);

    H += T / 60;
    M += T % 60;

    if (M >= 60)
    {
        H += M / 60;
        M = M % 60;
    }
    if (H >= 24)
    {
        H %= 24;
    }

    printf("%d %d\n", H, M);

    return 0;
}