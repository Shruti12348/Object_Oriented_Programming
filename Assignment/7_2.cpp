#include<iostream>
using namespace std;

class Person {
    public:
        Person() {
            cout<<"Person's constructor called"<<endl;
        }
};

class Faculty : public Person {
    public :
    Faculty() {
        cout<<"Faculty's constructor called"<<endl;
    }
};

class Student : public Person {
    public :
    Student() {
        cout<<"Student's canstructor called"<<endl;
    }
};

class TA : public Faculty , public Student {
    public :
    TA() {
        cout<<"TA's constructor called"<<endl;
    }
};

int main()
{
    cout<<"Name : Shruti Suraj Salunkhe"<<endl;
    cout<<"Roll no. : 76 "<<endl;
    
    TA ta;
    return 0;
}