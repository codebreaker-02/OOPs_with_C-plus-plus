#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	int size1,size2,ans;
        cout<<"Enter string 1: ";
	getline(cin,str1);
	cout<<"Enter string 2: ";
	getline(cin,str2);
	size1=str1.size();
	size2=str2.size();
	if(size1!=size2)
		cout<<"string is not equal.\n";
	else
	{
		int i=0;
		for(i=0;i<size1;i++)
		{	if(str1[i]!=str2[i])
			{
				cout<<"String is not equal";
				break;
			}
		}
			
		if(i==size1)
			cout<<"Strings are equal\n";
	}
	return 0;
}
