
#include<iostream>
using namespace std;
int main()
{
    int c,i,n,u,r;
    u=r=0;
    c=0;
    bool gate;

    cin>>n;
    string s;
    cin>>s;
    if(s[0]=='U') gate=true;
    else gate=false;
    cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {

        if(s[i]=='U') u++;
        else r++;
        if(u>r && gate==false) {gate=true;c++;}
        if(r>u && gate==true) {gate=false;c++;}
        cout<<r<<"  "<<u<<"  "<<c<<endl;

    }
    cout<<r<<"  "<<u<<"  "<<c;



    return 0;
}

