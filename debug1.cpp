#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int j;
    int count=0;
    int carrier1;
    int a=2;
    cin>>j;
    carrier1=j;
    while (a<=carrier1)
    {
       if(carrier1%a==0)
       {
        count=count+a;
        cout<<a<<" ";
        carrier1=carrier1/a;
        continue;
       }else{
        a++;
       }
    }
    return 0;
}