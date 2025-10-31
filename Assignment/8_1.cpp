#include<iostream>
using namespace std;

class Distance {
    public:
        int feet, inch;

    Distance(int f, int i)
    {
        this ->feet = f;
        this ->inch = i;
    }

    void operator-()
    {
        feet--;
        inch--;
        cout<<"\n Feet & Inches(Decrement): "<<feet<<"'"<<inch;
    }
};

int main()
{
    cout<<"Name : Shruti Suraj Salunkhe"<<endl;
    cout<<"Roll no. : 76 "<<endl;
    
    Distance d1(8,9);

    -d1;
    return 0 ;
}