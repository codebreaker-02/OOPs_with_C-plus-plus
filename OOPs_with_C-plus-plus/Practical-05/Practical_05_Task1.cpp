#include<iostream>
using namespace std;
void char_val(char a)
    {cout<<"\nChar Value: "<<a;}
void bool_val(bool a)
    {cout<<"\nBool Value: "<<a;}
void short_val(short a)
    {cout<<"\nShort Value: "<<a;}
void int_val(int a)
    {cout<<"\nInt Value: "<<a;}
void long_val(long a)
    {cout<<"\nLong Value: "<<a;}
void float_val(float a)
    {cout<<"\nFloat Value: "<<a;}
void double_val(double a)
    {cout<<"\nDouble Value: "<<a;}
void ldouble_val(long double a)
    {cout<<"\nLong Double Value: "<<a;}
void wideChar_val(wchar_t a)
    {cout<<"\nWIde Char Value: "<<a<<"\n";}

int main()
{
    char_val('A');
    bool_val(0);
    short_val(45);
    int_val(56754);
    long_val(43224545234);
    float_val(424.4f);
    double_val(2452.23);
    ldouble_val(245245245243524l);
    wideChar_val('Z');
    return 0;
}
