#include <bits/stdc++.h>
#include "math_utils.hpp"
int main()
{
    float a,b,c;
    float ans;
    a=1.0;
    b=2.0;
    c=3.0;
    while(c<1000)
    {
        ans=calculate_3d_dist(a,b,c);
        std::cout<<ans<<std::endl;
        a++;
        b++;
        c++;
    }
    return 0;
}