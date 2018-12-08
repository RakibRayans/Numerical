#include<bits/stdc++.h>
using namespace std;
double x[10], y[10], d1[10], d2[10], d3[10], d4[10], d5[10], d6[10], h, r, ans1, ans2;
int main()
{
    int i, j, k, n;
    cout <<" enter value n: "<<endl;
    cin >> n;
    cout << "enter x & y: "<< endl;
    for(i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for(i = 0; i < n - 1; i++)
    {
        d1[i] = y[i + 1] - y[i];
    }
    for(i = 0; i < n - 2; i++)
    {
        d2[i] = d1[i + 1] - d1[i];
    }
    for(i = 0; i < n - 3; i++)
    {
        d3[i] = d2[i + 1] - d2[i];
    }
    for(i = 0; i < n - 4; i++)
    {
        d4[i] = d3[i + 1] - d3[i];
    }
    for(i = 0; i < n - 5; i++)
    {
        d5[i] = d4[i + 1] - d4[i];
    }
    for(i = 0; i < n - 6; i++)
    {
        d6[i] = d5[i + 1] - d5[i];
    }
    h = x[1] - x[0];
    cout << h << endl;
    ans1 = (1 / h) * (d1[0] - (1 / 2) * d2[0] - (1/4) * d4[0] - (1 / 6)* d6[0]);
    ans2 = (1/ (h * h)) * (d2[0] - d3[0] + (11 / 12) * d4[0] + (137 / 180) * d6[0]);
    printf("(dy / dx) : ");
    cout << ans1 << endl;
    printf("(d2y / dx2) : ");
    cout << ans2 << endl;
    return 0;
}
/*
5
1.0 2.71
1.2 3.92
1.4 4.22
1.6 5.19
1.8 6.39
7
1.0 2.71
1.2 3.32
1.4 4.05
1.6 4.95
1.8 6.05
2.0 7.38
2.2 9.02
*/

