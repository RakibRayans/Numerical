#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double func(double v,double *coeff,int n)
{
    double sum = 0;
    for(int i=0;i<=n;i++)
    {
        sum += coeff[i] * pow(v,n-i);
    }
    return sum;
}
double derivative(double v,double coeff[],int n)
{
    double sum1 = 0;

    for(int i=0;i<n;i++)
    {
        sum1 += (coeff[i]*(n-i))  * pow(v,n-i-1);
    }
    return sum1;
}


int main()
{

    cout << "Enter the degree of the equation\n";
    int n;
    cin >> n;

    double coeff[n+1];

    cout << "\nEnter "<<n+1<<" co-efficients of the equation\n";
    for(int i=0;i<=n;i++)
        cin >> coeff[i];

    cout << "\nEnter the approximate root\n";
    double x0;
    cin >> x0;

    cout << "\nCorrection to how many decimal places\n";
    double dec;
    cin >> dec;
    cout << "\nEnter the tolerance or precision\n";
    double e ;//= //1.0 / pow(10,dec);
    cin>>e;

    int p = n-1;

    double xi[2];

    while (1)
    {
        xi[0] = x0 - p * (func(x0,coeff,n)/derivative(x0,coeff,n));
        xi[1] = x0 - (p-1) * (func(x0,coeff,n)/derivative(x0,coeff,n));

        if (fabs( func(xi[0],coeff,n) ) <= e)
        {
            cout <<fixed<<setprecision(dec)<< "The value of root is : " << xi[0];
            break;
        }
        else if (fabs( func(xi[1],coeff,n) ) <= e)
        {
            cout <<fixed<<setprecision(dec)<< "The value of root is : " << xi[1];
            break;
        }
        x0 = ( func(xi[0],coeff,n)< func(xi[1],coeff,n) )? xi[0] : xi[1];
    }
    return 0;
}


