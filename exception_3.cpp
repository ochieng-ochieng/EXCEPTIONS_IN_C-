
#include<iostream>
using namespace std;

class CRectangle{

    public:

};

void Xhandler(int test)
{
    try{
        if(test != 0)
            throw test;
    }
    catch(int i){
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }

}

int main()
{
    cout << "Start\n";

    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);


    cout << "End";

    return 0;
}

