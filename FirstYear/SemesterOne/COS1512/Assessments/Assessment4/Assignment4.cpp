#include <iostream>
using namespace std;
//float raised_to_power(float number, int power)
//{
//    if (power < 0)
//    {
//        cout << "\nError - can't raise to a negative power\n";
//        exit(1);
//    }
//    else if (power == 0)
//        return (1.0);
//    else
//        return (number * raised_to_power(number, power - 1));
//}
//

class A
{
private:
    int x;
protected:
    int getX();
public:
    void setX();
};

int A::getX()
{
    return x;
}

void A::setX()
{
    x=10;
}

//
class B
{
private:
    int y;
protected:
    A objA;
    int getY();
public:
    void setY();
};

void B::setY()
{
    y=24;
    int a = objA.getX();
    cout << a;
}

class C: public
    A
{
protected:
    int z;
public:
    void setZ();
};

int C::getZ()
{
    return z;
}

void C::setZ()
{
    z=65;
}


main()
}
cout << A();
return 0;
}

