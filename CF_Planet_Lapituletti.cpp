//
// Created by Minhaz on 3/6/2021.
//

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

bool mirr_syntax(int d)
{
    if(d==0 || d==1 || d==2 || d==5 || d==8) return true;
    else return false;
}

int two_five(int d)
{
    if(d==2) {d=5;return d;}
    if(d==5) {d=2;return d;}
    return d;
}

bool mirror(int d1,int d2,int d3,int d4, int h, int m)
{
    d1=two_five(d1);
    d2=two_five(d2);
    d3=two_five(d3);
    d4=two_five(d4);
   // cout<<d4<<d3<<d2<<d1<<endl;
    if(mirr_syntax(d1) && mirr_syntax(d2) && mirr_syntax(d3) && mirr_syntax(d4))
    {
        if((d4*10 + d3 < h) && (d2*10 + d1 < m)) return true;
        else return false;
    }
    else return false;

}





int main() {

    int T, h, m;
    string s;
    cin >> T;
    while(T--)
    {
        cin >> h >> m;
        cin >> s;
        int d1 = s[0] -'0';
        int d2 = s[1] -'0';
        int d3 = s[3] -'0';
        int d4 = s[4] -'0';
     //   cout << d1 << d2 << d3 << d4;
     //   cout<< endl;

        while(true){
            if(mirror(d1,d2,d3,d4,h,m)) {
                s= to_string(d1)+to_string(d2)+":"+to_string(d3)+to_string(d4);
                cout << s <<endl;
                break;
            } else{

                d4++;
                if(d4>9) {d4=0;d3++;}
                if((d3*10 + d4) >= m) {d3=0;d4=0;d2++;}
                if(d2>9) {d2=0;d1++;}
                if((d1*10 + d2) >= h) {d1=0;d2=0;}
            }
          //  cout << d1 << d2 << " : " << d3 <<d4 << endl;
        }
    }



    return 0;
}
