//
// Created by Minhaz on 3/11/2021.
//


#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

void gaycode(string str, int len)
{


    int arr[len] ,garr[len] ;
    for (int i=0;i<len;i++) garr[i]=arr[i]=0;

    for (int i = 0;  i<len; i++) {
        arr[i] =  str[i] - 48;

    }

    for (int i = 0;  i<len; i++) {
        if(i==0) garr[i] = arr[i];
        else garr[i] =  arr[i] ^ arr[i-1];
    }

    for (int i = 0;  i<len; i++) {
        cout << garr[i] ;
    }
    cout<<endl;



}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    queue<string> q;
    for (int i = 0;  i<n; i++) {
        cout<< "0" ;
    }
    cout<<endl;

    q.push("1");
    int temp=n;
    n=pow(2,n);
    while (n--)
    {
        string s1= q.front();
        string s2 = s1;
        if(s2.length()<temp) while(temp-s2.length()){s2.insert(0,"0");}
        gaycode(s2,s2.length());
       // cout << s2 <<endl;

        q.pop();
        s2 = s1;
        s1.append("0");
        q.push(s1);
        s2.append("1");
        q.push(s2);


    }

    return 0;


}

