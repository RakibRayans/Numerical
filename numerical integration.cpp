#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    double a,b,h,sum=0,integral;
    cout<<"Enter value of n=";
    cin>>n;
    double x[n+1],y[n+1];
    for (i=0;i<n;i++)
    {
       cin>>x[i];
    }
    for (i=0;i<n;i++)
    {
       cin>>y[i];
    }
    h=x[1]-x[0];

    for (i=1;i<n-1;i++)
    {
        sum=sum+y[i];
    }
    integral=h/2.0*(y[0]+2*sum+y[n-1]);
    cout<<"According to the trapezoiodal rule is: "<<integral<<endl;
    double sum1=0,sum2=0,integral1;
     for (i=1;i<n-1;i=i+2)
    {
       sum1=sum1+y[i];
    }
     for (i=2;i<n-1;i=i+2)
    {
       sum2=sum2+y[i];
    }
    integral1=h/3.0*(y[0]+4*sum1+2*sum2+y[n-1]);
    cout<<"According to the simpsons 1/3 rule: "<<integral1<<endl;
    double sum3=0,sum4=0,integral2;
     for (i=1;i<n-1;i=i++)
    {
      if(i%3==0)
        sum4=sum4+y[i];
      else
        sum3=sum3+y[i];
    }
     integral2=((3*h)/8.0)*(y[0]+3*sum3+2*sum4+y[n-1]);
    cout<<"According to the simpsons 3/8 rule:"<<integral2<<endl;
    return 0;
}
/*
6
7.47 7.48 7.49 7.50 7.51 7.52
1.93 1.95 1.97 2.01 2.03 2.06
*/

