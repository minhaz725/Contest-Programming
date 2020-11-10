#include <iostream>
using namespace std;

int main() {
    int n,k,c=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(a[i]==a[j] && a[i]!=-1)
            {
                a[j]=-1;
                c++;
            }
        }
    }
    if(k < n-c || n-c<k) cout<<"NO";
    else {
        cout<<"YES"<<n-c<<endl;
        c=0;
        for(int i=0;i<n;i++)
         {
            if(a[i]!=-1) {cout<<i+1<<" ";c++;}
            if(c>k) break;
         }
       }
       //cout<<c;


    return 0;
}
