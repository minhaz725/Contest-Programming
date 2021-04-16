#include <stdio.h>
void recurse(int c)
{
    if(c>5)
    {
        return;
    }
    printf("c=%d\n",c);
    recurse(c+1);
}
int main()
{
    recurse(1);
    return 0;
}
