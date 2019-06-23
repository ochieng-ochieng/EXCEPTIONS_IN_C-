
//restricting function throw types
#include<iostream>
using namespace  std;

//This function can only throw ints, chars, and doubles
void Xhandler()
{
    try
    {
        throw "hello";
    }
    catch(const char *)
    {
        cout << "Caught char * inside Xhandler\n";
        throw ; // rethrow char * out of function
    }
}

int main()
{
    cout << "Start\n";


    try
    {
        Xhandler();//also try passing 1 and 2 to Xhandler
    }
    catch(const char *) {
        cout << "Caught char * within main()\n";
    }


    cout << "end";

    return 0;
}
