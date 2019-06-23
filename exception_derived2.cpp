#include<iostream>
using namespace  std;

class B{

};

class D:public B{

};

int main()
{
    D derived;

    try
    {
        throw  derived;
    }
    catch(D b)
    {
        cout << "Caught a derived class\n";
    }
    catch(B b)
    {
        cout << "caught a base class\n";
    }

    return 0;
}

