#include <stdio.h>
int main()
{
    int i=1;
    recursion(5);
}
int recursion(int var)
{
    var--;
    if(var==0) return 0;
    else {
            printf("%d\n",var);
            recursion(var);
            printf("%d\n",var);
        }
}
