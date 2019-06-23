
#include<iostream>
using namespace std;

class CRectangle{

    public:

};

void Xtest(int test)
{
    cout << "Inside Xtest, test is: " << test << "\n";
    if(test != 0)
        throw test;
}

int main()
{
    cout << "Start\n";

    try{
        cout << "Inside try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);//will not execute.
    }
    catch(int i){
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }
    cout << "End";

    return 0;
}
