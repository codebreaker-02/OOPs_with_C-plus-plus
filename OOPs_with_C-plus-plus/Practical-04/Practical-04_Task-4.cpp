// Try to access these methods for Mixed Values [Int, Float] and see how the compiler will react to it?
#include<iostream>

namespace first{
        int add(int a, float b)
        {
                return a+b;
        }
}

namespace second{
        float add(float a,int b)
        {
                return a+b;
        }
}
int main()
{
        std::cout<<"First method(4 + 9.2) : "<<first::add(4,9.2)<<std::endl;
        std::cout<<"Second method(4.3 + 7) : "<<second::add(4.3,7)<<std::endl;
}