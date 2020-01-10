#include <iostream>
#include<cmath>
using namespace std;

//Write sumSqrt() here.
double sumSqrt(int N)
{
    double i=1,ans=0;
    if(N<=0)
    {
        return 0;
    }
    else
    {
        while(i<=N)
        {
            ans=ans+1.00000/sqrt(i);
            i++;
        }
        return ans;
    }
    
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
