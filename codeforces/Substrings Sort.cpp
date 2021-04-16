#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s[n],t[n];
    int a[n];
    for(int i=0;i<n;i++) {cin>>s[i];a[i]=s[i].length();}

    sort(a,a+n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) if(a[i]==s[j].length()) {t[i]=s[j];continue;}
    }
    cout<<"\n\n";

    for(int i=0;i<n-1;i++) if(t[i+1].find(t[i])==-1) {
        cout<<"NO";
        return 0;
    };
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) cout<<t[i]<<endl;


    return 0;
}

