#include <iostream>
using namespace std;
int main()
{
    int x,c=1;
    string s;
    cin>>x>>s;
    int l=s.length();
    while(1)
    {
        if(x<=0) break;
        c=c*x;
        x=x-l;

    }
    cout<<c;
    return 0;
}
