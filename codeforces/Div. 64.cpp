#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;

    if(s.size()<7) {cout<<"No";return 0;}
    else
    {
        int c=0;
        for(int i=0;s[i];i++)
        {
            if(s[i]==0) c++;
        }
        if(c>=6 && c<s.size()-1) cout<<"Yes";
        else cout<<"No"<<c;
        return 0;
    }
}
