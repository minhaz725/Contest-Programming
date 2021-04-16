#include <iostream>
using namespace std;
int main()
{
    int i,j;
    cout<< "\n\n\n\n\t\t" ;
    for(i=0;i<20;i++) cout<<"T";
    cout <<"\tTTT\t";
    for(i=0;i<5;i++) cout<<"TT";
    cout<<" "<<"\t";
    for(i=0;i<5;i++) cout<<"TT";
    cout<< endl ;
    for(i=0;i<20;i++)
    {   if(i==10 )
        {
            for(j=0;j<10;j++) {if( j<2 ) cout<<"\t\t\tTT\t\t\TTT\tTT\tTT\tTT\tTT"<<endl;
            else if(j>1 && j <4) cout<<"\t\t\tTT\t\t\tTT\tTT\tTT\tTT"<<endl;
            else if(j==4) cout<<"\t\t\tTT\t\t\tTT\tTTTTTTTTTT\tTT"<<endl;
            else cout<<" "<<"\t\t\t\TT\t\t\tTT\t\t\tTT"<<endl;}
        }

    }
    cout<< "\t\t" ;
    for(i=0;i<20;i++) cout<<"T";
    cout<<"\t\tTT\t\t\t\TT";

    cout<< "\n\n\n\n\t\t" ;
     for(i=0;i<20;i++) cout<<"T";
     cout<<"\t\tTT";
     for(i=0;i<8;i++) cout<<"TT";
     cout<<"\tTT\t\t"<<"    "<<"TT";
     cout<< "\n" ;
     for(i=0;i<5;i++) if(i==0 || i==1) cout<<"\t\tTT\t\t"<<"  "<<"TT\t\tTT\t\tTT\tTT\t\t"<<"    "<<"TT"<<endl;else cout<<"\t\tTT\t\t\t\tTT\t\tTT\tTT\t\t"<<"    "<<"TT"<<endl;
     cout<<"\t\t";
     for(i=0;i<10;i++) cout<<"TT";
     cout<<"\t\tTT";
     for(i=0;i<8;i++) cout<<"TT";
     cout<<"\tTT";
     for(i=0;i<10;i++) cout<<"TT";
     cout<<"\n";
     for(i=0;i<5;i++) if(i==3 || i==4) cout<<"\t\t\TT \t\t"<<"  "<<"TT\t\tTT\t\t\t\t"<<"  "<<"TT"<<endl;else cout<<"\t\t\t\t"<<"  "<<"TT\t\tTT\t\tTT\t\t"<<"  "<<"TT"<<endl;
     cout<<"\t\t";
     for(i=0;i<10;i++) cout<<"TT";
     cout<<"\t\tTT\t\t\t\t"<<"  "<<"TT";
     cout<< "\n\n\n\n\t\t\t\t\t\t" ;
     for(i=0;i<18;i++) cout<<"T";
     cout<< "\n";
     for(i=0;i<10;i++) cout<<"\t\t\t\t\t\t\tTT"<<endl;;


}
