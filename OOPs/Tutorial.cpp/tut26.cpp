// ***** Friend Functions *******
// Properties of 'Friend Functions'
/* 1. Not in the scope of the class.
   2. Since, it is not in the scope of class, it cannot be called from the object of that class i.e.  c1.sumComplex()== invalid;
   3. Can be invoked without the help of any object.
   4. Usually contains the objects as arguments .
   5. Can be declared inside public or private section of the class.
   6. It cannot access the members directly by their names & need object_name.member_name to access any member.
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void printNumber()
    {
        cout << " The complex no. is " << a << " + " << b << " i ." << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex C1, C2, sum;

    C1.setNumber(8, 4);
    C1.printNumber();

    C2.setNumber(6, 7);
    C2.printNumber();

    sum = sumComplex(C1, C2);
    sum.printNumber();

    return 0;
}