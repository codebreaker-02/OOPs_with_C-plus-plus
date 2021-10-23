#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="HELLO";
	cout<<"String befor change: "<<str<<endl;
	cout<<"Address of string before change: "<<&str<<endl;
	str[0]='J';
	cout<<"String after change: "<<str<<endl;
	cout<<"Address of string after change: "<<&str<<endl;
        return 0;
}
