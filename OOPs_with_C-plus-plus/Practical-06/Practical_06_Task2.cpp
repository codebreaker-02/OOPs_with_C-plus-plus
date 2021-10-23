#include<iostream>
#include<string.h>
using namespace std;
int main()
{
       int flag=1;
       string str;
       cout<<"Enter a string: ";
       getline(cin,str);
       for(string::iterator i=str.begin()-1,j=str.end();i<j;i++,j--)
       {
           if(*i!=*j)
           {
              flag=0;
              break;
           }
       }
       if(flag)
           cout<<"String is palindrome.\n";
       else
           cout<<"String is not palindrome.\n";
       return 0;
}
