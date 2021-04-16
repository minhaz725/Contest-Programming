//
// Created by Minhaz on 3/5/2021.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x,t;
    priority_queue<int> q;
    cin >> n;
    t=n;
    while (n-->1) {
        cin>>x;
        q.push(x);

    }
    if(n==2)
    {
        if(x==1) {cout << 2; return 0;}
        else {cout << 1; return 0;}
    }
    if(q.top()!=t) {cout << t; return 0;}
    while (!q.empty())
    {
        x=q.top();
        q.pop();
        if(x-q.top()>1) break;
    }
    cout << x-1;
    return 0;
}
