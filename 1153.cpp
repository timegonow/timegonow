#include<iostream>
#include<cstdio>
using namespace std;
int sum(int j)
{
    int carrier;
    for(int i=2;i<=j;i++)
    {
        if(j/i==1&&j%i==0)
        {
            carrier=i;
            break;
        }else{
            if(j%i==0)
            {
                carrier=i;
                break;
            }
        }
    }
    if(j%carrier==0&&j/carrier==1)
    {
        return 0;
    }else{
        return j;
    }
}
int main()
{
    int a=0;
    int b=0;
    for(int i=1;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            a=i*10+j;
            if(sum(a)==0)
            {
                b=j*10+i;
                if(sum(b)==0)
                {
                    cout<<a<<endl;
                }
            }
        }
    }
}