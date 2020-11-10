#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,x,y,i;
    cin>>y;

    while(1)
    {
        x=++y;
        for(i=0;i<4;i++)
        {
            if(i==0) d=x%10;
            if(i==1) c=x%10;
            if(i==2) b=x%10;
            if(i==3) a=x%10;
            x=x/10;

        }
        //cout<< a << b << c << d<<endl;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) break;

    }
    cout<<y;
    return 0;
}
