#include<bits/stdc++.h>


using namespace std ;


bool check (int j)

{

    int r1=0,r2=0,r3=0,m=j,i;

    char buffer [33];

    for(i=0; i<4; i++)
    {
        r1+=m%10;
        m/=10;
    }
    m=j;

    // itoa (m,buffer,16);

    for(i=0; i<4; i++)
    {
        r2+=m%12;
        m/=12;
    }


    if (r1!= r2)
    {
        return false ;

    }

    m=j;

    // itoa (m,buffer,16);

    for(i=0; i<4; i++)
    {
        r3+=m%16;
        m/=16;
    }


    if (r1!= r3)
    {
        return false ;

    }

    else
        return true;



}

int main ()


{


    for(int j=2992; j<10000; j++)
        if(check(j))
        {
            cout<<j<<endl;
        }





}
