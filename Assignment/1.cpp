#include<iostream>
using namespace std;

class Student{
    private:
        char name[30];
        int roll_no;
        float marks ;

    public:
        void inputDetails()
        {
            cout<<"Enter an name : ";
            cin>>name;

            cout<<"Enter an roll no. : ";
            cin>>roll_no;

            cout<<"Enter an marks : ";
            cin>>marks;
        }

        void displayDetails()
        {
            cout<<"name: "<<name<<endl;
            cout<<"Roll no. : "<<roll_no<<endl;
            cout<<"Marks : "<<marks<<endl;
        }
};

int main()
{
    cout<<"Name : Shruti Suraj Salunkhe "<<endl;
    cout<<"Roll no.: 76 "<<endl;
    Student obj;

    obj.inputDetails();

    obj.displayDetails();

    return 0;

}
