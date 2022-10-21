#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

//template<size_t dp>
//constexpr int32_t DoubleToFixed(double d)
//{
//    return int32_t(d * double(1 << dp) + (d >=0 ? 0.5 : -0.5));
//}
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

    cout<<"Total number entered "<<N<<endl;
    cout<<"sum of square "<<square_x<<endl;
    cout<<"division "<<square_x/N<<endl;
    cout<<fixed<<setprecision(2)<<"rms "<<rms<<setprecision(2)<<endl;

    return 0;
}
