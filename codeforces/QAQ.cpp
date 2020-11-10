#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,j=0,k=0,c=0;

    for(i=0;i<s.length();)
    {
        //cout<<i<<"   "<<s[i]<<"  "<<s<<endl;
        if(s[i]!='Q' && s[i]!='A') s.erase(i,1);
        else i++;

    }
  //  cout<<s<<endl;
    for(i=0;i<s.length();i++)
    {
        //cout<<"rafid ekta dhojo\n";
        if(s[i]=='Q')
        {


            for(j=i+1;j<s.length();j++)
            {
                if(i==s.length()) break;
                if(s[j]=='A')
                {
                        if(j==s.length()) break;
                        for(k=j+1;k<s.length();k++)
                        {
                            if(s[k]=='Q')    c++;//cout<<i  <<  j <<  k<<s[i]<<s[j]<<s[k]<<endl; }
                        }
                }


            }

          }

    }
    cout<<c;
    //cout<<s;
    return 0;
}

