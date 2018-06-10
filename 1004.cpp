#include<iostream>
using namespace std;

int main ()
{
    double s[13];
    cin>>s[0];
    for(int i=1;i<12;i++)
    {
        cin>>s[i];
        s[0]=s[0]+s[i];

    }
    cout<< "$"<<s[0]/12<<endl;
    return 0;
}
