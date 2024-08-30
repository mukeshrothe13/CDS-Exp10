# AIM
To understand and implement pointer operations in C++.

## Software Used
VS Code

## Problem Statements
1. Develop a C++ program to swap two numbers using call by value.
2. Develop a C++ program to swap two numbers using call by reference.

## Theory

### Call by Value
In the call by value approach, when a function is invoked, new elements are created on the stack to store function-related information, including memory allocation for parameters and return values. Modifications to the parameters within the function do not impact the original arguments.

### Call by Reference
In the call by reference approach, the function receives a reference to the argument rather than a copy. This allows the function to operate directly on the original argument. As a result, any changes made to the parameter within the function are reflected in the actual argument.

## Program Codes

```javascript
//Mukesh Rothe 23070123089 EXP10
#include <iostream>
using namespace std;
void swap(int *a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
  cout<<"Inside swabByValue- "<<"a = "<< *a<<" , "<<"b = "<< *b<<endl;
}
 int main()
{
int a=5,b=10;
cout<<"Before swapByValue- "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(&a,&b); 
cout<<"After swapByValue- "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
```
```javascript
//Mukesh Rothe 23070123089 EXP10
#include <iostream>
using namespace std;
void swap(int a,int b) 
{
    int temp;
    temp=a;
    a=b;
    b=temp;
   cout<<"Inside swapByValue- "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
int main() 
{
int a=5,b=10;
cout<<"Before swapByValue- "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(a,b);
cout<<"After swapByValue- "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
```

## Output
Call By Reference-

![Screenshot 2024-08-30 231749](https://github.com/user-attachments/assets/c57dce2a-038b-4f68-b8dd-002606d04d81)

Call By Value-

![Screenshot 2024-08-30 231812](https://github.com/user-attachments/assets/a1ce726d-85f9-4ef3-8433-f09a2d05a4f5)

## Conclusion
- We explored how to swap numbers using call by value.
- We also explored how to swap numbers using call by reference.
