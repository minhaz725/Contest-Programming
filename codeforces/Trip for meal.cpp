#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,x=0;
    cin>>n>>a>>b>>c;
    bool r,o,e;
    n--;
    e=o=false;
    r=true;

    while(n--)
    {
        if(r==true)
        {
            if(a<=b) {x=x+a;o=true;}
            else  {x=x+b;e=true;}
            r=false;
        }
        else if(o==true)
        {
            if(a<=c) {x=x+a;r=true;}
            else {x=x+c;e=true;}
            o=false;
        }
        else if(e=true)
        {
            if(b<=c) {x=x+b;r=true;}
            else {x=x+c;o=true;}
            e=false;
        }
        //cout<<n<<"  "<<x<<endl;
    }
    cout<<x;
    return 0;

}
