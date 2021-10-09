//Access these methods using "using" keyword for main method?
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
using namespace first;
using namespace second;
int main()
{
        std::cout<<"First method(4 + 9) : "<<first::add(4,9)<<std::endl;
        std::cout<<"Second method(4.3 + 7.2) : "<<second::add(4.3,7.2)<<std::endl;
}
