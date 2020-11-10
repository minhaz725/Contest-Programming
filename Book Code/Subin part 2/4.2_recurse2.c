#include <stdio.h>
void recurse(int c)
{
    if(c>5)
    {
        return;
    }
    recurse(c+1);
    printf("c=%d\n",c);

}
int main()
{
    recurse(1);
    return 0;
}

