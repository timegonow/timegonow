#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int array1[100][100];
    int array2[100][100];
    int m,n;
    double all;
    double count=0;
    double result;
    cin>>m>>n;
    all=m*n;
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
    for (int i = 0; i < m; i++)
    {
        for(int j=0;j<n;j++)
        {
            if (array1[i][j]==array2[i][j])
            {
                count++;
            }
        }
    }
    result=count/all*100;
    cout.setf(ios::fixed);
    cout<<setprecision(2)<<result;
    return 0;
}