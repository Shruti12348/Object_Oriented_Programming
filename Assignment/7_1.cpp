#include<iostream>
using namespace std;

class Vehicle {
    public : 
    Vehicle() {cout<<"This is a vehicle\n";}
};

class FourWheeler {
    public :
        FourWheeler() {cout<<"This is a 4 wheeler\n";}
};

class Car : public Vehicle, public FourWheeler {
    public :
        Car() {cout<<"This 4 wheeler Vehicle is Car \n";}
};

int main()
{
    cout<<"Name : Shruti Suraj Salunkhe"<<endl;
    cout<<"Roll no. : 76 "<<endl;
    
    Car obj;
    return 0;
}