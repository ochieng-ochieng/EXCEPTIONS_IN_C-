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
    catch(B b)
    {
        cout << "Caught a base class\n";
    }
    catch(D b)
    {
        cout << "This wont execute\n";
    }

    return 0;
}
