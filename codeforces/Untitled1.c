#include <stdio.h>

int fibonacci(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }

    return fibonacci(n);
}


int main()
{
    int n;
    scanf("%d",&n);

    if (n < 0)
    {
        return -1;
    }

    int i;
    for ( i = 1; i <= n; ++i)
    {
        printf("%d  " ,fibonacci(i) );
    }

    return 0;
}
