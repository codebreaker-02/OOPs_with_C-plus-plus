#include<iostream>
using namespace std;
class test
{
  int value;
  public:
    void set_value()
    {
      cin>>value;
    }
    int get_value()
    {
      return value;
    }
};
void operator +(test a,test b)
{
  cout<<"Sum of the values: "<<a.get_value()+b.get_value();
}
int main()
{
  test t1,t2;
  t1.set_value();
  t2.set_value();
  t1+t2;
  return 0;
}
