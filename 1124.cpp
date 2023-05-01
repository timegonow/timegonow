#include<iostream>
using namespace std;
int main()
{
    int array1[100][100];
    int array2[100][100];
    int result[100][100];
    int m,n;
    cin>>m>>n;
    for (int  i = 0; i <m; i++)
    {
        for (int  j = 0; j < n; j++)
       {
            cin>>array1[i][j];
       }
    }
    for (int  i = 0; i <m; i++)
    {
        for (int  j = 0; j < n; j++)
       {
            cin>>array2[i][j];
       }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            result[i][j]=array1[i][j]+array2[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==n-1)
            {
                cout<<result[i][j]<<endl;
            }else{
                cout<<result[i][j]<<" ";
            }
        }
    }
    return 0;
}