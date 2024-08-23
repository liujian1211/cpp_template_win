#include <iostream>
#include <memory>
using namespace std;


int main()
{
   int x{0};
   int num1 {sizeof(int)};
   cout<<"num1="<<num1<<endl;

   int num2{sizeof(x)};
   cout<<"num2="<<num2<<endl;

   int num3{sizeof(int*)};
   cout<<"num3="<<num3<<endl;

   auto value1(12);
   auto value2(1.);
   cout<<"value1="<<sizeof(value1)<<endl;
   cout<<"value2="<<sizeof(value2)<<endl;
}