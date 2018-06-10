#include<iostream>
#include<stdlib.h>
using namespace std;

int main ()
{
  int s,a[200],b[200],z=0,j;
    while (1)
    {
        cin>>s;
        if(s==-1)
        {
            break;
        }
        a[0]=0;
        b[0]=0;
        for(int i=1;i<=s;i++)
        {
            cin>>a[i]>>b[i];
            j=a[i]*abs(b[i-1]-b[i]);
            z=z+j;
        }
            cout<<z<<" miles "<<endl;
            z=0;

    }
    return 0;

}
