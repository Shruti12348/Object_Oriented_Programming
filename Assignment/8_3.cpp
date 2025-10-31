#include<iostream>
using namespace std;

class Myclass {
    private :
        int value;
    public :
        Myclass(int val)
            :value(val)
            {

            }
        
            bool operator == (const Myclass& other) const{
                return value == other.value;
            }

            bool operator!=(const Myclass& other) const
            {
                return !(*this ==other);
            }

            bool operator<(const Myclass& other)const{
                return value <other.value;
            }

            bool operator>(const Myclass& other)const{
                return value > other.value;
            }

            bool operator<=(const Myclass& other)const{
                return !(*this>other);
            }

            bool operator>=(const Myclass& other)const{
                return !(*this<other);
            }
};

int main()
{
    cout<<"Nmae : Shruti Suraj Salunkhe"<<endl;
    cout<<"Roll no. : 76"<<endl;
    
    Myclass obj1(20);
    Myclass obj2(20);

    if(obj1==obj2)
    {
        cout<<"obj1 is equal to obj2"<<endl;
    }
    else{
        cout<<"obj1 is not equal to obj2"<<endl;
    }

    if(obj1<obj2)
    {
        cout<<"obj1 is less than obj2"<<endl;
    }
    else{
        cout<<"obj1 is greater than obj2"<<endl;
    }

    if(obj1!=obj2)
    {
        cout<<"obj1 is not equal to obj2"<<endl;
    }
    else{
        cout<<"obj1 is equal to obj2"<<endl;
    }

    if(obj1>obj2)
    {
        cout<<"obj1 is greater than obj2"<<endl;
    }
    else{
        cout<<"obj1 is less than obj2"<<endl;
    }

    if(obj1<=obj2)
    {
        cout<<"obj1 is less than or equal to obj2"<<endl;
    }
    else{
        cout<<"obj1 is greater than or equal to  obj2"<<endl;
    }

    if(obj1>=obj2)
    {
        cout<<"obj1 is greater than or equal to obj2"<<endl;
    }
    else{
        cout<<"obj1 is less than or equal to obj2"<<endl;
    }

    return 0;
}