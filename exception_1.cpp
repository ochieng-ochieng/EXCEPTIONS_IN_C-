#include<iostream>
using namespace std;

class CRectangle{

    public:

};

int main()
{
    cout << "Start\n";

    try{
        cout << "Inside try block\n";
        throw 100;
        cout << "This will not execute.\n";
    }
    catch(double i){
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }
    cout << "End";

    return 0;
}
