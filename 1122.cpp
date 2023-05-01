#include<iostream>
using namespace std;
int main()
{
    int array[5][5];
    int max_min[5];
    int min[5];
    int max[5];
    int count=0;
    int yspot=0;
    int xspot=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=1;i<=5;i++)
    {
        min[i]=array[i][1];
        for(int j=1;j<=5;j++)
        {
            if (min[i]>array[i][j])
            {
                min[i]=array[i][j];
                yspot=j;
            }
        }
        max[i]=array[1][yspot];
        for(int k=1;k<=5;k++)
        {
            if(max[i]<array[k][yspot])
            {
                max[i]=array[k][yspot];
                xspot=k;
            }
        }
        if(max[i]==min[i])
        {
            count++;
            max_min[count]=max[i];
        }
    }
    if(count==0)
    {
        cout<<"not found";
    }else{
        for(int i=1;i<=count;i++)
        {
            cout<<xspot<<" "<<yspot<<" "<<max_min[i]<<" ";
        }
    }
    return 0;
}