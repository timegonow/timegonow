#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int minute=0;
    int second=0;
    int minute_read;
    int second_read;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>minute_read>>second_read;
        if(minute_read==0&&second_read==0)
        {
            break;
        }else{
        minute=minute+minute_read;
        second=second+second_read;
        }
    }
    minute=minute+(second-second%60)/60;
    second=second%60;
    cout<<minute<<" "<<second<<endl;
    return 0;
}