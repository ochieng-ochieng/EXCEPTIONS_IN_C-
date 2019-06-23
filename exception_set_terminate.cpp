#include<iostream>
#include <cstdlib>
#include<exception>

using namespace std;

void my_Thandler()
{
    cout << "Inside new terminate handler\n";
    abort();
}

int main()
{
    //set a new terminate handler
    set_terminate(my_Thandler);

    try
    {
        cout << "Inside try block\n";
        throw 100;//throw an error.
    }
    catch(double i)//wont catch an int exception
    {
        //....
    }

    return 0;
}
