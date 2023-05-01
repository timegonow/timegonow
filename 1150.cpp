#include<iostream>
#include<cstdio>
using namespace std;
int sum(int j)
{
    int count=0;
    int carrier;
    int a=2;
    carrier=j;
    while (a<carrier)
    {
        if(carrier%a==0)
        {
            count=count+a+carrier/a;
            a++;
            continue;
        }else{
            a++;
        }
    }
    if(count/2+1==j)
    {
            return 0;
    }else
    {
            return j;
    }
}
int main()
{
    int n;
    int count0=0;
    int result[500];
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(sum(i)==0)
        {
            count0++;
            result[count0]=i;
            continue;
        }
    }
    for(int i=1;i<=count0;i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}