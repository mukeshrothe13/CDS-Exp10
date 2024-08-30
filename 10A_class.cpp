//Mukesh Rothe  23070123089  EXP10
#include <iostream>
using namespace std;
class Car{
    public:
    string make ="Hyundai ";
    string model ="i20";
    int year = 2018;
};
int main(){
    Car myCar;
    cout<<"Car Details: " <<myCar.make<<""<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;
}
