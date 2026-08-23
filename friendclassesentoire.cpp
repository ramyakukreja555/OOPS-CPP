// another way(declaring entire calculator class as friend)
#include <iostream>
using namespace std;

// Forward declaration
class calculator;

class complexnumber
{
    int a, b;

    // Entire calculator class is a friend
    friend class calculator;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

class calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    int sumrealcomplex(complexnumber o1, complexnumber o2)
    {
        return o1.a + o2.a;
    }

    int sumimaginarycomplex(complexnumber o1, complexnumber o2)
    {
        return o1.b + o2.b;
    }
};

int main()
{
    complexnumber c1, c2;

    c1.setnumber(2, 3);
    c2.setnumber(4, 5);

    calculator c;

    cout << "Sum of real parts: "
         << c.sumrealcomplex(c1, c2) << endl;

    cout << "Sum of imaginary parts: "
         << c.sumimaginarycomplex(c1, c2) << endl;

    return 0;
}