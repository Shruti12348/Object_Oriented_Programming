#include<iostream>
using namespace std;

class Complex{
    public:
        int real;
        int imaginary;

        Complex()
        {
            real = 0;
            imaginary = 0;
        }

        Complex(int r, int i)
        {
            real = r;
            imaginary = i;
        }

        Complex addComplexNumbers(Complex C1,Complex C2)
        {
            Complex res;

            res.real = C1.real+C2.real;

            res.imaginary = C1.imaginary+C2.imaginary;

            return res;
        }
};

int main()
{
    cout<<"Name : Shruti Suraj Salunkhe "<<endl;
    cout<<"Roll no.: 76 "<<endl;
    Complex C1(2,4);
    cout<<"Complex number 1 : "<<C1.real<<"+i"<<C1.imaginary<<endl;

    Complex C2(5,8);
    cout<<"Complex number 2 : "<<C2.real<<"+i"<<C2.imaginary<<endl;

    Complex C3;
    C3 = C3.addComplexNumbers(C1,C2);

    cout<<"Sum of Complex numbers are : "<<C3.real<<"+i"<<C3.imaginary;

}