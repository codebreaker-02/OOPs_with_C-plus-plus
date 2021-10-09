// Try to access these methods without using, (SRO) and "using" keyword and check how the compiler will react to it?
#include<iostream>
namespace first{
        int add(int a,int b)
        {
                return a+b;
        }
}

namespace second{
        float add(float a,float b)
        {
                return a+b;
        }
}
int main()
{
        std::cout<<"First method(4 + 9) : "<<add(4,9)<<std::endl;
        std::cout<<"Second method(4.3 + 7.2) : "<<add(4.3,7.2)<<std::endl;
}
