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
    int n;
    int count=0;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(sum(i)==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}