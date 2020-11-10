#include <stdio.h>

int x=1;
void func(int y)
{
    y=y*2;
    x=x+10;
    printf("func: x=%d y=%d\n",x,y);
}
int main()
{
    int y=5;
    x=10;
    func(y);
    printf("main: x=%d y=%d\n",x,y);
    return 0;
}
