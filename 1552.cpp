#include<iostream>
using namespace std;

int main()
{
    int z,arr[1000],ar=0,x,i,x1,c=0,a;
    while(1)
    {
        cin>> a;
        if(a==-1)
        {
            break;
        }
        if(a!=0)
        {
            arr[ar]=a;
            ar++;
        }else
        {
            for(z=0;z<ar;z++)
            {
                for(x=0;x<ar;x++)
                {
                    i = arr[x]+arr[x];
                    if(i==arr[z])
                    {
                        c++;
                    }
                }
            }
            cout<< c<< endl;
            ar=0;
            c=0;
        }
    }
}
