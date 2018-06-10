#include<iostream>
using namespace std;

int main()
{
    int z,s=0,i,t=0,j,f=0;
    for(z=1;z<=10000;z++)
    {
        f=0;
        for(i=z-50;i<=z;i++)
    {
        s=i;
        t = t+s;
        while(s)
        {
            j = s%10;
            s=s/10;
            t=t+j;
        }
        if(t == z)
        {
            f=1;
            break;
        }
        t=0;
    }
    if(f==0)
    {
        cout << z<<endl;
    }
    }

    return 0;
}
