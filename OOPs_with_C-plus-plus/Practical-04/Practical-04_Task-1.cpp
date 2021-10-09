//add(int,int), add(float, float), both of these methods are in two different namespaces First and Second respectively.
//Access these methods using scope resolution operator [::](SRO) from main method?
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
	std::cout<<"First method(4 + 9) : "<<first::add(4,9)<<std::endl;
	std::cout<<"Second method(4.3 + 7.2) : "<<second::add(4.3,7.2)<<std::endl;
}