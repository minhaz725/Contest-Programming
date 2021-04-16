#include <iostream>
using namespace std;
int main()
{
    int a,b,c,x,y,z,n;
    cin>>n;
    x=y=z=0;
    while(n--)
    {
        cin>>a>>b>>c;
        x=x+a;
        y=y+b;
        z=z+c;
    }
    if(x==0 && y==0 && z==0) cout << "YES";
    else cout<<"NO";
    return 0;
}
