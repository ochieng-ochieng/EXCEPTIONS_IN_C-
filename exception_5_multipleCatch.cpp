#include<iostream>
using namespace  std;

void xHandler(int test)
{
    try{
        if(test != 0)
            throw test;
        else
            throw "value is zero";
    }
    catch(int i){
        cout << "Caught exception#:" << i << endl;
    }
    catch(const char *str){
        cout << "Caught a string:" << str << endl;
    }
}

int main()
{
    cout << "Start\n";

    xHandler(1);
    xHandler(2);
    xHandler(0);
    xHandler(3);

    cout << "End";

    return 0;
}
