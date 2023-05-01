#include<iostream>
#include<iomanip>
using namespace std;
int sum(double j,double k ,double l)
{
    double array[3];
    array[0]=j;
    array[1]=k;
    array[2]=l;
    double max;
    max=array[0];
    for(int i=0;i<3;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    return max;
}
int main()
{
    double a,b,c;
    double n1,n2,n3;
    double result;
    cin>>a>>b>>c;
    n1=sum(a,b,c);
    n2=sum(a+b,b,c);
    n3=sum(a,b,b+c);
    result=n1/(n2*n3);
    cout.setf(ios::fixed);
    cout<<setprecision(3)<<result;
    return 0;
}