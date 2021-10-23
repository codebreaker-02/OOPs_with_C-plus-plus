#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
       string a="Rahul";
       string b,c="";
       int index=0;
       for(string::iterator i=a.end();i>=a.begin();i--,index++)
       {
              c+=*i;
       }
       cout<<"\nresersed string without using inbuilt function: "<<c<<"\n";
       std::reverse(a.begin(),a.end());
       cout<<"reversed string using inbuilt function: "<<a<<"\n";
       return 0;
}
       
