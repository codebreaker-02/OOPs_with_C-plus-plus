#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
        cout<<"Difference of two characters (a-n): "<<(int)('a'-'n')<<endl;
	cout<<"Enter string 1: ";
	getline(cin,str1);
	cout<<"Enter string 2: ";
	getline(cin,str2);
        int x=str1.compare(str2);
	cout<<"Difference of two string: "<<x<<endl;
	return 0;
}
