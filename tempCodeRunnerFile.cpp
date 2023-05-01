#include<iostream>
#include<cstdio>
using namespace std;
int sum(int j)
{
    int count=0;
    int carrier1;
    carrier1=j;
    int a=2;
    while (a<=carrier1/2)
    {
       if(carrier1%a==0)
       {
        count=count+a;
        carrier1=carrier1/a;
        continue;
       }else{
        a++;
       }
    }
    if(count+1==j)
    {
        return 0;
    }else{
        return j;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(sum(i)==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}