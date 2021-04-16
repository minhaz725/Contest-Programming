//
// Created by Minhaz on 3/8/2021.
//


#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void printQueue(queue<ll> q)
{
    //printing content of queue
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,c,x;
    queue<ll> a,b;
    cin >> n;
    c=(n*(n+1))/2;
    if(c%2!=0) {
        cout << "NO";
        return 0;
    }
    else{
        cout << "YES" <<endl;
        c=c/2;
        while (n)
        {
           // cout<< c<<endl;
            if(c-n >=0) {
                a.push(n);
                c=c-n;
                ;
            }
            else b.push(n);

            n--;
        }
    }

    cout << a.size() << endl;
    printQueue(a);
    cout << b.size() << endl;
    printQueue(b);


}
