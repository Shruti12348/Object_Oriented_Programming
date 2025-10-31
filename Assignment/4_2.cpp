#include<iostream>
using namespace std;

class construct
{
    public :
        float area;

    construct()
    {
        area = 0 ;
    }

    construct(int a, int b)
    {
        area = a*b ;
    }

    void disp()
    {
        cout<<area<<endl;
    }
};

int main()
{
    cout<<"Name : Shruti Suraj Salunkhe "<<endl;
    cout<<"Roll no. : 76 "<<endl;
    
    construct o;
    construct o2(10,20);

    o.disp();
    o2.disp();

    return 1;
}