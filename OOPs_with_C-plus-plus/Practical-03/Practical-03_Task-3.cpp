//Take a char variable and use cin to take its value from the user, cout it and it will only return one character and loss rest of the data you have entered!
//How to resolve above issue?
#include<iostream>
using namespace std;
int main()
{
        string a;
        getline(cin,a);
        cout << a;
}
