//
// Created by Minhaz on 3/6/2021.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    char a= s[0];
    int n=1,max=1;
    for(long int i=1; i< s.length() ; i++)
    {
        if(s[i]==a) n++;
        else
        {
            n=1;
            a=s[i];
        }
        if(n > max) max=n;
    }
    cout << max;
    return 0;
}
