#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void)
{
    int N; // 0보다 크거나 같은 정수
    scanf("%d", &N);

    printf("%d", factorial(N));

    return 0;
}