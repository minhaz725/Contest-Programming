#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,t,i;
    char c;
    cin>>n>>t;
    string s;
    cin>>s;
    cout<<endl;
    while(t--)
    {
        for(i=0;i<n-1;)
        {
            if(s[i]<s[i+1])
            {
                c=s[i];
                s[i]=s[i+1];
                s[i+1]=c;
                i+=2;
            }
            else i++;
        }
    }
    cout<<s;
    return 0;

}
