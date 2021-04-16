#include <stdio.h>
int digit_checker(char a)
{
    char b;
    scanf("%c",&b);
    if(b>='0' && b<='9') return 1;
    else return 0;
}

int main()
{
    char a;
    digit_checker(a);

}
