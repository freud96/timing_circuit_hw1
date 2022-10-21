#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{

    //8.4 fixed point

    short int x, square_x = 0;
    int N = 0;
    double rms;
    while(cin >> x )
    {
        square_x += x*x;
        N++;
    }

    if(N==0)
        return 0;

    rms = pow(square_x/N, 0.5);

  
    cout<<fixed<<setprecision(2)<<"rms "<<rms<<setprecision(2)<<endl;

    return 0;
}
