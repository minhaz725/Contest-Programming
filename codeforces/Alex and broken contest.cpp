
/////////insert method on s4,why runtime error occurs for all???

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string s1="Danil";
    string s2="Olya";
    string s3="Slava";
    string s4="Ann";
    string s5="Nikita";
    int x1=s.find(s1);
    int x2=s.find(s2);
    int x3=s.find(s3);
    int x4=s.find(s4);
    int x5=s.find(s5);
    //cout<<x1<<x2<<x3<<x4<<x5;
    bool x=false;
    if( (x1>=0 && x2>=0) || (x1>=0 && x3>=0) || (x1>=0 && x4>=0) || (x1>=0 && x5>=0) || (x2>=0 && x3>=0) || (x2>=0 && x4>0) || (x2>=0 && x5>=0) || (x3>=0 && x4>=0) ||(x3>=0 && x5>=0) || (x4>=0 && x5>=0) )
    {
        cout<<"NO";
        return 0;
    }
    else if(x1>=0 && x==false) {
        //    cout<<"kk"<<s<<endl;
            x=true;

        s.erase(x1,s1.size());
        //s.insert(x1,"f");
        x1=s.find(s1);

        if(x1>=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    else if(x2>=0 && x==true) {
        //{cout<<"kk"<<s<<endl;
        cout<<"NO";
        return 0;
    }
    else if(x2>=0 && x==false) {x=true;

//cout<<"kk"<<s<<endl;

        s.erase(x2,s2.size());
        //s.insert(x3,"f");
        x2=s.find(s2);

        if(x2>=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    else if(x3>=0 && x==true)
        {
        cout<<"NO";
        return 0;
    }

    else if(x3>=0 && x==false) {x=true;



        s.erase(x3,s3.size());
        //s.insert(x3,"f");
        x3=s.find(s3);

        if(x3>=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    else if(x4>=0 && x==true)
        {
        cout<<"NO";
        return 0;
    }

    else if(x4>=0 && x==false) {x=true;



        s.erase(x4,s4.size());
        s.insert(x4,"f");
        x4=s.find(s4);

        if(x4>=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    else if(x5>=0 && x==true)
        {
        cout<<"NO";
        return 0;
    }

    else if(x5>=0 && x==false) {x=true;

  //      cout<<"kk"<<s<<endl;

        s.erase(x5,s5.size());
        //s.insert(x5,"f");
        x5=s.find(s5);
    //    cout<<s<<x5;

        if(x5>=0)
        {
            cout<<"NO";
            return 0;
        }
    }
    else if(x==false)
        {
        cout<<"NO";
        return 0;
    }

    cout<<"YES";



}
