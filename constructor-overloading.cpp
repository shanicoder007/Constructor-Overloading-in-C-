#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex(int x, int y)
    {

        a = x;
        b = y;
    }
    // Default Constructor
    Complex(int)
    {
        // Here we can assigned the values '0' from 'Numbers' in Construtors.That is caled Constructor overloading.

        a = 0;
        b = 0;
    }

    void printNumber()
    {

        cout << "Your Number is :  " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    Complex c1(5, 7);
    c1.printNumber();

    Complex c2(6);
    c2.printNumber();

    return 0;
}