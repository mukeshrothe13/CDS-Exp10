//Mukesh Rothe 23070123089 EXP10
#include <iostream>
using namespace std;
void swap(int a,int b) 
{
    int temp;
    temp=a;
    a=b;
    b=temp;
   cout<<"Inside swapByValue function: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
int main()
 
{ int a=5,b=10;
cout<<"Before swapByValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(a,b);
cout<<"After swapByValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
