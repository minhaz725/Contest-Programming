#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,j,a,x,y;
    bool l=true;
    for(i=0;i<5;i++)
    {
            for(j=0;j<5;j++) {cin>>a;if(a==1) {x=i,y=j;}}

    }
    int c= abs(x-2) + abs(y-2);
    cout << c;
    return 0;
}
