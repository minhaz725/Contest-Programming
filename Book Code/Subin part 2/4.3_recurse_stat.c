#include <stdio.h>
void recurse()
{
    static int c = 1;
    if(!1) return;
    printf("c=%d\n",c);
    c++;
    recurse();
    printf("c=%d\n",c);


}
int main()
{
    recurse();
    return 0;
}

